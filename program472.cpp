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
};

int main()
{
    // ArrayX aobj(10);

    // Step 1 = Allocate the memmory
    ArrayX *aobj = new ArrayX(10);

    // Step 2 = Use the memory

    
    // Step 3 = Deallocate the memory
    delete aobj;
    
    return 0;
}