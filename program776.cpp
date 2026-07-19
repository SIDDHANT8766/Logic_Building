// Cornel utility Suit project code from program763.c to program775.c

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

        void BubbleSort();
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
//////////////////////////////////////////////////

// 21   15  18  16  11  

void ArrayX :: BubbleSort()          // Imp
{
    int i = 0, j = 0;
    int temp = 0;
    int Pass = 0;

    if(Sorted == true)      // Important filter
    {
        return;
    }
               /////////                   //////
    for(i = 0, Pass = 1; i < iSize-1; i++, Pass++)    // Outer loop
    {
        for(j = 0; j < iSize-1 - i; j++)    // Inner loop
        {
            if(Arr[j] > Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }

        cout<<"\nData after pass"<<i + 1<<"\n";
        Display(); 
    }

    cout<<"Number of Passes for bubble sort :"<<Pass<<"\n";

    Sorted = true;
}


int main()
{
    int iValue = 0;

    cout<<"Enter the elements of array :\n";
    cin>>iValue;

    ArrayX aobj(iValue);

    aobj.Accept();

    cout<<"Data before sorting \n";
    aobj.Display();

    
    aobj.BubbleSort();

    cout<<"Data after sorting \n";
    aobj.Display();
    
    return 0;
}