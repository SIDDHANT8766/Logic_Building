/*
    iRow = 4;
    iCol = 4;

    Output =
    a  b  c  d 
    a  b  c  d 
    a  b  c  d 
    a  b  c  d 
*/

import java.util.Scanner;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
       int i = 0; int j = 0;
       char ch = 'a';
       
       for(i=1; i <= iRow; i++)
       {
         for(j=1;j <= iCol; j++, ch++)    // important to reset
         {
           System.out.printf("%c\t",ch);
         }
          System.out.println();
       }
       

    }
}
class program179
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