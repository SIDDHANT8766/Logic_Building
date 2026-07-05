#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public: 
        T *Arr;
        int iSize;

        ArrayX(int no);

        ~ArrayX();

        void Accept();

        void Display();

        T Addition();

        T Maximum();

        int Frequency(T);


};

template <class T>
ArrayX<T> :: ArrayX(int no)
{
    cout<<"Inside Constructor \n";
    iSize = no;
    Arr = new <T>[iSize];
}

template <class T>
ArrayX<T> :: ~ArrayX()
{
    cout<<"Inside Distructor \n";
    delete [] Arr;
}

template <class T>
void ArrayX<T> :: Accept()
{
    int iCnt = 0;

    cout<<"Enter the elements :\n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }

}

template <class T>
void ArrayX<T> :: Display()
{
    int iCnt = 0;

    cout<<"Elements of array are : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

template <class T>
T ArrayX<T> :: Addition()
{
    T iSum = 0;
    int iCnt = 0;

    // T iSum;
    // iSum = Arr[0] - Arr[0];          

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

template <class T>
T ArrayX<T> :: Maximum()
{
    T iMax = 0;
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

template <class T>
int ArrayX<T> :: Frequency(T iNo)
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
    ArrayX<int> *aobj = new ArrayX<int>(iValue);


    // Step 2 = Use the memory
    aobj -> Accept();
    aobj -> Display();


    cout<<"Summetion of all elements :"<<aobj -> Addition()<<"\n";
    cout<<"Maximum of all elements :"<<aobj -> Maximum()<<"\n";
    cout<<"Maximum of all elements :"<<aobj -> Frequency(11)<<"\n";

    
    // Step 3 = Deallocate the memory
    delete aobj;
    
    return 0;
}