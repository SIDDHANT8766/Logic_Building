#include<iostream>
using namespace std;

template <class T>

T Summetion(T Arr[], int iSize)
{
   int iCnt = 0;
   T iSum;

   for(iCnt = 0, iSum = Arr[0]; iCnt <= iSize; iCnt++)
   {
      iSum = iSum + Arr[iCnt];
   }
   return iSum;
}
int main()
{
    float Brr[] = {10.2f,20.1f,30.0f,40.4f,50.5f};

    float iRet = 0.0f; 
    
    iRet = Summetion(Brr,5);

    cout<<"Addition is:"<<iRet<<"\n";

    return 0;
}