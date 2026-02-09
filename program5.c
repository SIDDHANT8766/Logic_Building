#include<stdio.h>
int main()
{
    int i=0;
    int j=0;
    int ans =0;
     
    printf("Enter first number:\n");
    scanf("%d",&i);

    printf("Enter second number:\n");
    scanf("%d",&j);

    ans =i+j;            // Business logic

    printf("Addition is : \n%d",ans);      //(\n%d) can be (%d\n) 

    
    
    return 0;
}