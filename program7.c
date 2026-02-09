#include<stdio.h>

int AdditionTwoNumbers(int iNo1,int iNo2)
{
    int iSum =0;
    iSum = iNo1+iNo2;       // Business Logic
    return iSum;
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    int iRet =0;
     
    printf("Enter first number:\n");
    scanf("%d",&iValue1);

    printf("Enter second number:\n");
    scanf("%d",&iValue2);

    iRet= AdditionTwoNumbers(iValue1,iValue2);

    printf("Addition is : \n%d",iRet);      //(\n%d) can be (%d\n) 

    
    
    return 0;
}