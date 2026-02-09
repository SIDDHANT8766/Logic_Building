/*
Step1:Understand the problem statement
Step2:Write thre algorith
Step3:Decide language
Step4:Write Program
Step5:Test the Program
*/

/*
Algorithm

    START
         Accept first number as no1
         Accept second number as no2
         If the input is negetive then convert it into positive
         Perform addition of no1 and no2
         Displya the addition on screen
    STOP     
*/

///////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers
//  Description :   It is used to perform addition
//  Input :         Float,Float
//  Output :        Float
//  Auther :        Siddhant Vivek Gadkari
//  Date :          09/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////

int AdditionTwoNumbers(float fNo1,float fNo2)
{
    float fSum =0.0f;
     // Updater (both if)
     if (fNo1 < 0.0f)
     {
        fNo1 = -fNo1;
     }

     if (fNo2 < 0.0f)
     {
        fNo2 = -fNo2;
     }


    fSum = fNo1+fNo2;       // Business Logic
   

    return fSum;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////////
int main()
{
    float fValue1=0.0f;
    float fValue2=0.0f;
    float fRet =0.0f;
     
    printf("Enter first number:\n");
    scanf("%f",&fValue1);

    printf("Enter second number:\n");
    scanf("%f",&fValue2);

    fRet= AdditionTwoNumbers(fValue1,fValue2);

    printf("Addition is : \n%f",fRet);          //(\n%d) can be (%d\n) 

    
    
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfulliy handeled by application
//
//  Input1 : 10.5    Input2: 3.2    Output : 13.7
//  Input1 : -10.5    Input2: 3.2    Output : 13.7
//  Input1 : 10.5    Input2: -3.2    Output : 13.7
//  Input1 : 10.5    Input2: 0.0    Output : 10.5
//
/////////////////////////////////////////////////////////////////////////////////////