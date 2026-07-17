#include<iostream>
#include<stdio.h>

using namespace std;

int CountCapital(char* str)
{
    static int iCount = 0;

    if(*str != 0)
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCount++;
        }

        str++;

        CountCapital(str);
    }
    return iCount;
}


int main()
{
    int iRet = 0;
    char Arr[50] = {'\0'};

    printf("Enter string :\n");
    scanf("%[^'\n]s",Arr);   //

    iRet = CountCapital(Arr);
    printf("Capital count is is : %d",iRet);
    
    return 0;
}