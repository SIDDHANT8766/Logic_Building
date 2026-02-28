// Input : 6
// Output:  1  * 2  *  3  
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


       /*
        for(iCnt = -iNo; iCnt <= 5; iCnt++)
        {
           System.out.print(iCnt+"\t");
        }
        */
        System.out.println();
    }
}
class program162
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