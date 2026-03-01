/*
   input  = 8
   output = 1  A  3 B  5  C 
*/

import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;
        // int i = 97;

        char ch = 'A';

        for(iCnt=1; iCnt <= iNo; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                System.out.printf("%c\t",ch);
                ch++;

            }
            else
            {
                System.out.printf("%d\t",iCnt);
            } 

            
        }
        System.out.println();
        
    
    }
}
class program177
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