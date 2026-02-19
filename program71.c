// iteration 

#include<stdio.h>

int SumDigits(int iNo)
{
    
    int iSum = 0;
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = - iNo;
    }
    
    while(iNo != 0)
    { 
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iSum = iSum + iDigit;
    }
    return iSum;
}

int main()
{
    int iValue = 0;

    int iRet = 0;
   
    printf("Enter your number:\n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Sum of digit : %d\n",iRet);



    return 0;
}