// Call by Address
#include<stdio.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);   
    }   
}

int main()
{
    int Brr[] = {10,20,30,40};        // Change

    Display(Brr,4);        // Diaplay(100,4); base address and No of elements of Array
   
    return 0;
}