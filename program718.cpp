#include<iostream>
#include<stdio.h>

using namespace std;

int strlenX(char* str)
{
    static int iCount = 0;

    if(*str != 0)
    {
        iCount++;
        str++;
        strlenX(str);        
    }
    
    return iCount;
}


int main()
{
    int iRet = 0;
    char Arr[50] = {'\0'};

    printf("Enter string :\n");
    scanf("%[^'\n]s",Arr);   //

    iRet = strlenX(Arr);
    printf("String length is : %d",iRet);
    
    return 0;
}