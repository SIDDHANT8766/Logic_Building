#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;     // Copy name of int * (Another name of Datatype)

int FrequencyCalculate(int Arr[], int iSize, int iNo)
{
    int iCnt = 0; int iCount=0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        } 
    }

    return iCount;
}
int main()
{
    int iLength = 0; int iRet = 0; int iValue = 0;
    int iCnt = 0;    // for loop counter
    IPTR iPtr = NULL;

    printf("Enter the number of elements in array:");
    scanf("%d",&iLength);


    // Step 1 :- Allocate the memory
    iPtr = (IPTR) malloc (iLength * sizeof(int));    // (sizeof(int)) depents on platform , size of integer

        if(NULL == iPtr)
        {
            printf("annable to alocate memmory");
            return -1;
        }
    
    printf("Enter the values:\n");
     
    for(iCnt = 0; iCnt< iLength; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);        // index wise storing
    }

    printf("Enter the number to calculate frequency: ");
    scanf("%d",&iValue);

    // Step 2 :- Use the memory 
      // Call to the function which contais business logic
        // Fun(iPtr, iLength)
    
    iRet = FrequencyCalculate(iPtr,iLength,iValue);
    
    printf("Frequency of number %d is:%d",+iValue,iRet);
    

    // Setp 3:- Free the memory
    free(iPtr);    

    return 0;
}