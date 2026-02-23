// Call by Address
#include<stdio.h>

void Display(int Arr[])
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < 7; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);   
    }   

}
int main()
{
    int Brr[] = {10,20,30,40,50,60,70};        // Change

    Display(Brr);        // Diaplay(100) base address
   
    return 0;
}