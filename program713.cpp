
#include<iostream>
using namespace std;

int SumFactors(int iNo)
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

        SumFactors(iNo);
    }

    return fSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter your number :"<<"\n";
    cin>>iValue;

    iRet = SumFactors(iValue);
    cout<<iRet;
    
    return 0;
}