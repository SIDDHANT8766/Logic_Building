
#include<iostream>
using namespace std;

bool CheckPerfect(int iNo)
{
    static int iCnt = 1;
    static int fSum = 0;

    if(iCnt <= (iNo / 2))
    {
        if(iNo % iCnt == 0)
        {
            fSum = fSum + iCnt;
        }

        iCnt++;

        CheckPerfect(iNo);
    }

    if(fSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter your number :"<<"\n";
    cin>>iValue;

    bRet = CheckPerfect(iValue);
    
    if(bRet == true)
    {
        cout<<"It is perfect";
    }
    else
    {
        cout<<"It is not a perfect number";
    }
    
    return 0;
}