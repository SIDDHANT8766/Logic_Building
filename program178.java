/*
   input  = 8
   output = z  y  x  w  v  u  s
*/

import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;
        // int i = 97;

        char ch = 'z';

        for(iCnt= iNo; iCnt >= 1; iCnt--)
        {
            System.out.printf("%c\t",ch);
            ch--;   
        }
        System.out.println();
        
    
    }
}
class program178
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the frequency:");
        iValue =sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue);

        


    }
}