// Sunny number

import java.util.*;

class program835
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        
        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();   
        
        iNo++;  // 

        int Ans = (int)Math.sqrt(iNo);

        if(iNo == (Ans * Ans))
        {
            System.out.println((iNo-1)+" is Sunny number");
        }
        else
        {
            System.out.println((iNo-1)+" is not Sunny number");
        }
    }
}