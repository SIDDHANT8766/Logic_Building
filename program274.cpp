#include<iostream>
using namespace std;

template <class T>

int CountFrequency(T Arr[], int iSize, T No)
{
   int iCnt = 0; int iCount = 0;

   for(iCnt = 0; iCnt <= iSize; iCnt++)
   {
      if( (Arr[iCnt]) == No)
      {
        iCount++;
      }
      
   }
   return iCount;
}
int main()
{
    float Brr[] = {10.2f,20.1f,30.0f,40.4f,50.5f,20.1f};

    int iRet = 0; 
    
    iRet = CountFrequency(Brr,6,20.1f);

    cout<<"Count freqency is:"<<iRet<<"\n";

    return 0;
}