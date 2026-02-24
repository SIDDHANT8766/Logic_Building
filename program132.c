// Call by Address
#include<stdio.h>
#include<stdlib.h>

int Average(int Arr[], int iSize)
{
    int iCnt = 0;
    float iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       iCount = iCount +Arr[iCnt];
    }

    return ((float)iCount / (float)iCnt);      // Important
}
int main()
{
    int iLength = 0; int iCnt = 0; float iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements of Array:\n ");
    scanf("%d",&iLength);  

    ptr = (int *) malloc(iLength * sizeof(int));

        if(NULL == ptr)    // Industrial way of coding 
        {
            printf("Anable to allocate memmory"); 
            return -1;  
        }
       
    printf("Enter the elements:\n");

    for(iCnt = 0;iCnt < iLength; iCnt++)
    {
          scanf("%d",&ptr[iCnt]);
    }

   iRet = Average(ptr,iLength);

   printf("Number is: %f\n",+iRet);


    free(ptr);

    return 0;
}