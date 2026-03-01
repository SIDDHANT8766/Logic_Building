/*
    iRow = 4;
    iCol = 4;

    Output =
    *  *  *  *
    *  $  $  *
    *  $  $  *
    *  *  *  *

*/

import java.util.Scanner;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
       int i = 0; int j = 0; 
       
       for(i=1; i <= iRow; i++)
       {
         for(j=1; j <= iCol; j++)
         { 
            if(((i == 1) || (i == iRow)) || ((j == 1) || (j == iCol)))
            {
               System.out.printf("*\t");
            }
            else
            {
                System.out.printf("$\t");
            }
           
        }
          System.out.println();
       }
       

    }
}
class program184
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0; int iValue2 = 0;

        System.out.println("Enter number of Row:");
        iValue1 =sobj.nextInt();

        System.out.println("Enter number of Column:");
        iValue2 =sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1, iValue2);   

    }
}