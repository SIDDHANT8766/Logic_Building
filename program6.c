#include<stdio.h>

int Add(int a,int b)
{
    int sum =0;
    sum = a+b;       // Business Logic
    return sum;
}
int main()
{
    int i=0;
    int j=0;
    int ans =0;
     
    printf("Enter first number:\n");
    scanf("%d",&i);

    printf("Enter second number:\n");
    scanf("%d",&j);

    ans = Add(i,j);

    printf("Addition is : \n%d",ans);      //(\n%d) can be (%d\n) 

    
    
    return 0;
}