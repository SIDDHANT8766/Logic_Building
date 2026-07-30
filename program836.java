// Disarium number

import java.util.*;

class program836
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iDigit = 0;
        int iTemp = 0;
        int iCount = 0;
        int iSum = 0;
        
        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();  
        
        iTemp = iNo;
        
        while(iNo != 0)
        {
            iCount++;
            iNo = iNo / 10;
        }

        iNo = iTemp;

        // 135
        while(iNo != 0)
        { 
            iDigit = iNo % 10;
            iSum = iSum + ((int)Math.pow(iDigit,iCount));
            iCount--;
            iNo = iNo / 10;
        }


        if(iSum == iTemp) 
        {
            System.out.println(iTemp+" is Disarium");
        }
        else
        {
            System.out.println(iTemp+" is not Disarium");
        }
    }
}