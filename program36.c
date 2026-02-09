#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt=1; iCnt <= iNo; iCnt++)
    {
         printf("%d\t",iCnt);

    }

         

   printf("\n");
}

int main()
{

    Display(7);


    return 0;
}
