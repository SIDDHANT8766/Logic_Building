
import java.util.*;

class Number
{
    public long CalculateFactorial(int iNo)
    {
       int i =  0;
       long iFact = 1;  //Imprtant 

       if(iNo < 0)      // Updater
       {
           iNo = -iNo;      
       }

       i = 1;
       while(i<=iNo)    // Change
       {
         iFact = i*iFact;
         i++;
       }

       return iFact;
    }
}     // End of Number Class  

class program89
{
    public static void main(String A[])
    {
        int iValue = 0;
        long iRet = 0;
    
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number:");
        iValue=sobj.nextInt();

        Number nobj  = new Number();
        iRet = nobj.CalculateFactorial(iValue);

        System.out.println(("Factorial is "+iRet));

        // Important 

        sobj = null;
        nobj = null;

        System.gc();
    }
}