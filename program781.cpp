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
        void BubbleSortEfficient();
        void BubbleSortEfficientX(int iOption);
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


void ArrayX :: BubbleSort()          // Imp
{
    int i = 0, j = 0;
    int temp = 0;
    int Pass = 0;
    int Time = 0;

    if(Sorted == true)      // Important filter
    {
        return;
    }

    Time = 1;

    for(i = 0, Pass = 1; i < iSize-1; i++, Pass++)    // Outer loop
    {
        for(j = 0; j < iSize-1 - i; j++, Time++)    // Inner loop
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
    cout<<"Total number of iteration :"<<Time<<"\n";

    Sorted = true;

    cout<<"\n";
}

//////////////////////////////////////////////////////////////////

// 21   15  18  16  11  

void ArrayX :: BubbleSortEfficient()          // Imp
{
    int i = 0, j = 0;
    int temp = 0;

    bool bFlag = false;

    /*
    if(Sorted == true)      // Important filter
    {
        return;
    }
*/

    bFlag = true;

         ///////////
    for( i = 0; (i < iSize-1) && (bFlag == true); i++)    // Outer loop
    {
        bFlag = false; // 

        for(j = 0; j < iSize-1 - i; j++)    // Inner loop
        {
            if(Arr[j] > Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;

                bFlag = true;  // 
            }
        }

        cout<<"\nData after pass "<<i + 1<<"\n";
        Display(); 
    }

    cout<<"Number of Passes for bubble sort :"<< i <<"\n";

    Sorted = true;

    cout<<"\n";
} 

/////////////////////////////////////////////////////////////////

// 21   15  18  16  11  

// 1 : Increasing
// 2 : Decreasing

void ArrayX :: BubbleSortEfficientX(int iOption = 1)  // we can take a default        // Imp
{
    int i = 0, j = 0;
    int temp = 0;

    bool bFlag = false;
    
    if(iOption < 1 || iOption > 2)
    {
        cout<<"invalid option for sorting \n";
        cout<<"1 : Increasing\n";
        cout<<"2 : Decreasing\n";
    }

    /*
    if(Sorted == true)      // Important filter
    {
        return;
    }
*/

    bFlag = true;

         ///////////
    for( i = 0; (i < iSize-1) && (bFlag == true); i++)    // Outer loop
    {
        bFlag = false; // 

        if(iOption == 1) // Increasing
        {
            for(j = 0; j < iSize-1 - i; j++)    // Inner loop
            {
                if(Arr[j] > Arr[j+1])
                {
                    temp = Arr[j];
                    Arr[j] = Arr[j + 1];
                    Arr[j + 1] = temp;

                    bFlag = true;  // 
                }  
            }

        }
        else if(iOption == 2)  // Decreasing
        {
            for(j = 0; j < iSize-1 - i; j++)    // Inner loop
            {
                if(Arr[j] < Arr[j+1])
                {
                    temp = Arr[j];
                    Arr[j] = Arr[j + 1];
                    Arr[j + 1] = temp;

                    bFlag = true;  // 
                }  
            }


        }
        

        cout<<"\nData after pass "<<i + 1<<"\n";
        Display(); 
    }

    cout<<"Number of Passes for bubble sort :"<< i <<"\n";

    Sorted = true;

    cout<<"\n";
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

    // 1 : Increasing
    // 2 : Decreasing
    aobj.BubbleSortEfficientX(2);

    cout<<"Data after sorting \n";
    aobj.Display();
    
    return 0;
}