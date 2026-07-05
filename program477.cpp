#include<iostream>
using namespace std;

class ArrayX
{
    public: 
        int *Arr;
        int iSize;

        ArrayX(int no);

        ~ArrayX();

        void Accept();

        void Display();

        int Addition();

        int Maximum();

        int Frequency(int no);


};

ArrayX :: ArrayX(int no)
{
    cout<<"Inside Constructor \n";
    iSize = no;
    Arr = new int[iSize];
}

ArrayX :: ~ArrayX()
{
    cout<<"Inside Distructor \n";
    delete [] Arr;
}

void ArrayX :: Accept()
{
    int iCnt = 0;

    cout<<"Enter the elements :\n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }

}

void ArrayX :: Display()
{
    int iCnt = 0;

    cout<<"Elements of array are : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

int ArrayX :: Addition()
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int ArrayX :: Maximum()
{
    int iMax = 0;
    int iCnt = 0;

    iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
}

int ArrayX :: Frequency(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }

    return iCount;
}

/////////////////////////////////////////////////

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

    cout<<"Summetion of all elements :"<<aobj -> Addition()<<"\n";
    cout<<"Maximum of all elements :"<<aobj -> Maximum()<<"\n";
    cout<<"Frequency of all elements :"<<aobj -> Frequency(10)<<"\n";

    
    // Step 3 = Deallocate the memory
    delete aobj;
    
    return 0;
}