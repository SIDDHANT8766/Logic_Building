// Input = 7891
// Output = 4

#include<iostream>
using namespace std;

int SumDigits(int iNo)
{
    static int iSum  = 0;
    
    if(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
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