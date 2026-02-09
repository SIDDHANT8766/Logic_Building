/*
    START
         Accept number and store as no
         Dedide no bt 2
         If the reminder is 0 
           then display as even
         otherwise
            display as odd            
    STOP


*/

#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem=0;

    iRem= iNo % 2;

    if(iRem==0)
    {
        printf("It is even number\n");
    }
    else
    {
        printf("It is odd number\n");
    }

}



int main()
{
    int iValue =0;

    printf("Enter yhe number");
    scanf("%d",&iValue);


    CheckEvenOdd(iValue);

    return 0;
}