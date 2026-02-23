
import java.util.*;

class Number
{
    public boolean CheckPerfect(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        if (iNo < 0)           // Updater
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo % iCnt) ==0)
            {
                iSum = iSum+iCnt;
            }
        }

        return (iSum == iNo);    /* if (iSum == iNo)
                                    {
                                        return true;
                                    }
                                    else
                                    {
                                        return false;
                                    }

                                    */

    }
}     // End of Number Class  

class program82
{
    public static void main(String A[])
    {
        int iValue = 0;
        boolean bRet = false;
    
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number:");
        iValue=sobj.nextInt();

        Number nobj  = new Number();
        bRet = nobj.CheckPerfect(iValue);

        if(bRet == true)
        {
            System.out.println(iValue+" is Perfect number");
        }
        else
        {
            System.out.println(iValue+" is not Perfect number");
        }

        // Inportant 

        sobj = null;
        nobj = null;

        System.gc();
    }
}