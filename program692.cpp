// Input = 5
// Output = 54321

#include<iostream>
using namespace std;

void Display(int iNo)
{

    while(iNo >= 1)
    {
        cout<<iNo<<"\t";
        iNo--;
    }

    cout<<"\n";
}

int main()
{
    int iValue = 0;

    cout<<"Enter your number :"<<"\n";
    cin>>iValue;

    Display(iValue);

    return 0;
}