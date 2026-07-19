#include<iostream>
using namespace std;

class ArrayX
{
    public: 
        int *Arr;
        int iSize;
        bool Sorted;

        ArrayX(int no);
        ~ ArrayX();
        void Accept();
        void Display();
        bool CheckSorted();
};

ArrayX :: ArrayX(int no)
{
    cout<<"Inside Constructor \n";
    iSize = no;
    Arr = new int[iSize];
    Sorted = true;
}

ArrayX :: ~ ArrayX()
{
    cout<<"Inside Distructor \n";
    delete [] Arr;
}

void ArrayX ::  Accept()
{
    int iCnt = 0;

    cout<<"Enter the elements :\n";

    cin>>Arr[iCnt];

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];

        if(Arr[iCnt - 1] > Arr[iCnt])   // Imp
        {
            Sorted = false;
        }
    }

    // Sorted = CheckSorted();

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





////////////////////////////////////

bool ArrayX :: CheckSorted()      // 
{
    int i = 0;
    bool bFlag = true;
    
    for(i = 0; i < (iSize-1); i++)  // Imp
    {
        if(Arr[i] > Arr[i + 1])  // Imp
        {
            bFlag = false;
            break;
        }
    }

    return bFlag;
}




int main()
{
    int iValue = 0;

    cout<<"Enter the elements of array :\n";
    cin>>iValue;

    ArrayX aobj(iValue);

    aobj.Accept();
    aobj.Display();
    
    
    
    return 0;
}