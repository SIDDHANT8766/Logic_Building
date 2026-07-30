// Spy number

import java.util.*;

class program833
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iDigit = 0;
        int iSum = 0;
        int iMul = 1;
        int iTemp = 0;

        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();

        iTemp = iNo;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iSum = iSum + iDigit;

            iMul = iMul * iDigit;

            iNo = iNo / 10;
        }

        if(iSum == iMul)
        {
            System.out.println(iTemp+" is Spy number");
        }
        else
        {
            System.out.println(iTemp+" is not Spy number");
        }
        
    }
}