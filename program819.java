// Strong number

import java.util.*;

class program819
{
    public static boolean CheckStrong(int iNo)
    {
        int iTemp = 0;       // 
        int iSum = 0;       // 
        int iDigit = 0;       // 

        iTemp = iNo;

         //      index    0, 1, 2, 3, 4,   5,   6,   7,     8,      9
        int iFactArr[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iSum = iSum + iFactArr[iDigit];  // Imp

            iNo = iNo / 10;
        }

        return(iSum == iTemp);      // 
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        boolean bRet = false;
        
        // 145
        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();

        bRet = program817.CheckStrong(iNo);

        if(bRet)      // 
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