// Input = 7891
// Output = 4

#include<iostream>
using namespace std;

int CountDigits(int iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        iCnt++;
        iNo = iNo / 10;
    } 

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter your number :"<<"\n";
    cin>>iValue;

    iRet = CountDigits(iValue);
    cout<<"Total number of digits are :"<<iRet<<"\n";

    cout<<"\n";

    return 0;
}