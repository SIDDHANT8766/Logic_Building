// Input = 7891
// Output = 4

#include<iostream>
using namespace std;

int SumDigits(int iNo)
{
    static int iSum  = 0;
    int iDigit = 0;     // dont use static because we not want to preserve it
    
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        // iNo = iNo / 10;      -> |
        SumDigits(iNo / 10);   // iNo
    } 

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter your number :"<<"\n";
    cin>>iValue;

    iRet = SumDigits(iValue);
    cout<<"Total number of addition are :"<<iRet<<"\n";

    return 0;
}