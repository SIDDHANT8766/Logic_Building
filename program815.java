// Strong number

import java.util.*;

class program815
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iFact = 1;       // 
        int i = 0;

        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();

        for(i = 1; i <= iNo; i++)
        {
            iFact = iFact * i;
        }

        System.out.println("Factorial is : "+iFact);
        

    }
}