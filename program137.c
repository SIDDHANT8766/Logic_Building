#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR;     // Copy name of int * (Another name of Datatype)

// O(N)
bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0; int iCount=0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        } 
    }

    if(iCount > 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int iLength = 0; int iValue = 0;
    bool bRet = false;
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

    printf("Enter the number to Search: ");
    scanf("%d",&iValue);

    // Step 2 :- Use the memory 
      // Call to the function which contais business logic
        // Fun(iPtr, iLength)
    
    bRet = LinearSearch(iPtr,iLength,iValue);
    
    if(bRet == true)
    {
        printf("%d is present in the data",iValue);
    }
    else
    {
         printf("%d is not present in the data",iValue);
    }

    

    // Setp 3:- Free the memory
    free(iPtr);    

    return 0;
}