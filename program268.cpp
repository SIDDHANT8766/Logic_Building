#include<iostream>
using namespace std;

int Summetion(int Arr[], int iSize)
{
   int iCnt = 0;
   int iSum = 0;

   for(iCnt = 0; iCnt <= iSize; iCnt++)
   {
      iSum = iSum + Arr[iCnt];
   }
   return iSum;
}
int main()
{
    int Brr[] = {10,20,30,40,50};

    int iRet = 0; 
    
    iRet = Summetion(Brr,5);

    cout<<"Addition is:"<<iRet<<"\n";

    return 0;
}