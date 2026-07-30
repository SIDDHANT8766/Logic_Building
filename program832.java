// Automorphic number

import java.util.*;

class program832
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iTemp = 0;
        int iCount = 0;
        int iSquare = 0;
        int iDeno = 0;

        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();

        iTemp = iNo;

        iSquare = iNo * iNo;

        while(iNo != 0)
        {
            iCount++;
            iNo = iNo / 10;
        }

        iDeno = (int)Math.pow(10,iCount);      // 

        if(iSquare % iDeno == iTemp)
        {
            System.out.println(iTemp+" is Automorphic number");
        }
        else
        {
            System.out.println(iTemp+" is not Automorphic number");
        }
    }
}