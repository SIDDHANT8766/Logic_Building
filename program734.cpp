#include<iostream>
#include<stdio.h>

using namespace std;

int Summetion(int Brr[],int iSize)
{
    static int i = 0;
    static int iSum = 0;

    if( i < iSize)
    {
        cout<<Brr[i]<<"\n";
        iSum = iSum + Brr[i];
        i++;
        Summetion(Brr,iSize);
    }

    return iSum;
}

int main()
{
    int iret = 0;

    int Arr[] = {10,20,30,40,50};

    iret = Summetion(Arr,5);
    cout<<"Addition is :"<<iret<<"\n";
    
    return 0;
}