// Call by Address
#include<stdio.h>
#include<stdlib.h>

int Summetion(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       iSum = iSum + Arr[iCnt];  
    }

    return iSum;   
}
int main()
{
    int iLength = 0; int iCnt = 0; int iRet = 0;
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

   iRet = Summetion(ptr,iLength);

   printf("Addition is: %d\n",+iRet);


    free(ptr);

    return 0;
}