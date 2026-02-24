#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;     // Copy name of int * (Another name of Datatype)

int Minimum(int Arr[],int iSize)
{
    int iCnt = 0;int iMin;

    for(iMin = Arr[iCnt],iCnt=0; iCnt < iSize; iCnt++) // Industrial approach
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;


}
 

int main()
{
    int iLength = 0; 
    int iRet = 0;    
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


    // Step 2 :- Use the memory 
      // Call to the function which contais business logic
        // Fun(iPtr, iLength)
    
    iRet = Minimum(iPtr,iLength);

    printf("Minimum number is:%d\n",iRet);

    // Setp 3:- Free the memory
    free(iPtr);    

    return 0;
} 