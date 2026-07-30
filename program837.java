// Triomorphic number

import java.util.*;

class program837
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iTemp = 0;
        int iCount = 0;
        int iCube = 0;
        int iDeno = 0;

        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();

        iTemp = iNo;

        iCube = iNo * iNo * iNo;

        while(iNo != 0)
        {
            iCount++;
            iNo = iNo / 10;
        }

        iDeno = (int)Math.pow(10,iCount);      // 

        if(iCube % iDeno == iTemp)
        {
            System.out.println(iTemp+" is Triomorphic number");
        }
        else
        {
            System.out.println(iTemp+" is not Triomorphic number");
        }
    }
}