// Strong number

import java.util.*;

class program816
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iFact = 1;       // 
        int iTemp = 0;       // 
        int iSum = 0;       // 
        int iDigit = 0;       // 
        int i = 0;

        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();

        iTemp = iNo;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;

            // Logic

                 ///////
            for(iFact = 1, i = 1; i <= iDigit; i++)
            {
                iFact = iFact * i;
            }

            iSum = iSum + iFact;

            iNo = iNo / 10;
        }

        if(iSum == iTemp)
        {
            System.out.println("Its s Strong number");
        }
        else
        {
            System.out.println("Its not a Strong number");
        }

    }
}