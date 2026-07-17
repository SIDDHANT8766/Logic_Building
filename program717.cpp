#include<iostream>
#include<stdio.h>

using namespace std;

int strlenX(char* str)
{
    int iCount = 0;

    while(*str != 0)
    {
        iCount++;
        str++;
    }
    return iCount;
}


int main()
{
    int iRet = 0;
    char Arr[50] = {'\0'};

    printf("Enter string :\n");
    scanf("%[^'\n]s",Arr);   //
    scanf("%[^'\n]s",Arr);   //

    iRet = strlenX(Arr);
    printf("String length is : %d",iRet);
    
    return 0;
}