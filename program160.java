// Input : 5
// Output:  5  4  3  2  1  0  1  2  3  4  5  
// Counter : 1  2  3  4  5  6  

import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;


        for(iCnt = -iNo; iCnt <= iNo; iCnt++)        // i can write 0 instead of iNo
        {
           System.out.print(iCnt+"\t");
        }

        for(iCnt =0; iCnt >= iNo; iCnt++)          // i can 1 instead of 0, but condition will change
        {
           System.out.print(iCnt+"\t");
        }

       /*
        for(iCnt = -iNo; iCnt <= 5; iCnt++)
        {
           System.out.print(iCnt+"\t");
        }
        */
        System.out.println();
    }
}
class program160
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter the frequency:");
        iValue = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue);

    }
}