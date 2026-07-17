#include<iostream>
#include<stdio.h>

using namespace std;

int Display(int Brr[],int iSize)
{
    int i = 0;
    int iSum = 0;

    while( i < iSize)
    {
        cout<<Brr[i]<<"\n";
        iSum = iSum + Brr[i];
        i++;
    }

    return iSum;
}

int main()
{
    int iret = 0;

    int Arr[] = {10,20,30,40,50};

    iret = Display(Arr,5);
    cout<<"Addition is :"<<iret<<"\n";
    
    return 0;
}