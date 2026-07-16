// Input  = 4
// Output = 1+2+3+4 

#include<iostream>
using namespace std;

int iFact = 1;

void Factorial(int iNo)
{  
    if(iNo >= 1)
    {
        iFact = iFact * iNo;
        Factorial(--iNo);        // Pre decreament 
    }
    
}

int main()
{
    Factorial(4);
    cout<<"Factorial is :"<<iFact<<"\n";
    
    return 0;
}