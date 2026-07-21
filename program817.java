// Strong number

import java.util.*;

class program817
{
    public static boolean CheckStrong(int iNo)
    {
        int iFact = 1;       // 
        int iTemp = 0;       // 
        int iSum = 0;       // 
        int iDigit = 0;       // 
        int i = 0;

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
            return true;
        }
        else
        {
           return false;
        }


    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        boolean bRet = false;
        

        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();

        bRet = program817.CheckStrong(iNo);

        if(bRet == true)
        {
            System.out.println(iNo+" is Strong");
        }
        else
        {
            System.out.println(iNo+" is not a Strong");
        }

        sobj.close();

    }
}