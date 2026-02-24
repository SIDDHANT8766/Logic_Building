#include<stdio.h>
#include<stdlib.h>


int main()
{
    int iLength = 0;
    int iCnt = 0;    // for loop counter
    int *iPtr = NULL;

    printf("Enter the number of elements in array:");
    scanf("%d",&iLength);

    // Step 1 :- Allocate the memory
    iPtr = (int *) malloc (iLength * sizeof(int));    // (sizeof(int)) depents on platform , size of integer

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

    // Setp 3:- Free the memory
    free(iPtr);    

    return 0;
}