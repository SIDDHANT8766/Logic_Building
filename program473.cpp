#include<iostream>
using namespace std;

class ArrayX
{
    public: 
        int *Arr;
        int iSize;

        ArrayX(int no)
        {
            cout<<"Inside Constructor \n";
            iSize = no;
            Arr = new int[iSize];
        }

        ~ ArrayX()
        {
            cout<<"Inside Distructor \n";
            delete [] Arr;
        }

        void Accept()
        {
            int iCnt = 0;

            cout<<"Enter the elements :\n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }

        }

        void Display()
        {
            int iCnt = 0;

            cout<<"Elements of array are : \n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }

};

int main()
{
    int iValue = 0;

    cout<<"Enter the elements of array :\n";
    cin>>iValue;

    // Step 1 = Allocate the memmory
    ArrayX *aobj = new ArrayX(iValue);


    // Step 2 = Use the memory
    aobj -> Accept();
    aobj -> Display();


    
    // Step 3 = Deallocate the memory
    delete aobj;
    
    return 0;
}