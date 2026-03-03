#include<stdio.h>

void CountAll(char str[])
{
    int iCountSmall = 0;
    int iCountCapital = 0; 

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
          iCountCapital++;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
           iCountSmall++;
        }
        str++;
    }
    
    printf("Capital character are:%d\n",iCountCapital);
    printf("Small character are:%d\n",iCountSmall);
  
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    CountAll(Arr);

    return 0;
} 