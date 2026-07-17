#include<iostream>
#include<stdio.h>

using namespace std;

void strDisplay(char* str)
{
    if(*str != '\0')
    {
        cout<<str<<"\n";
        str++;
        strDisplay(str);
    }

}


int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string :\n");
    scanf("%[^'\n]s",Arr);   //
    scanf("%[^'\n]s",Arr);   //

    strDisplay(Arr);
    
    return 0;
}