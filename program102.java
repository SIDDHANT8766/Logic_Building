import java.util.Scanner;

class ArrayX
{
    public void Display(int Brr[])
    {
        System.out.println("Elements of the array are:");
        int i = 0;
        for(i=0; i<Brr.length;i++)
        {
            System.out.println(Brr[i]);
        }
    }

    public int CountEven(int Brr[])
    {
        int i = 0;
        int iCount = 0;

        for(i=0; i< Brr.length; i++)
        {
            if((Brr[i] % 2) == 0)
            {
                iCount++;
            }
        }
        return iCount;
    }

    public int Summetion(int Brr[])
    {
        int i = 0;
        int iSum = 0;

        for(i = 0; i< Brr.length; i++)
        {
            iSum = Brr[i]+iSum;
        }
        return iSum;

    }


}
class program102
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        int i = 0;
        int iRet = 0;
        int iSum = 0;

        System.out.println("Enter the size of array:");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elments:");
             
        
        for(i = 0; i < Arr.length; i++)
        {
            Arr[i]=sobj.nextInt();
        }
    
        
        
        ArrayX aobj = new ArrayX();
        aobj.Display(Arr);

        iRet = aobj.CountEven(Arr);
        iSum = aobj.Summetion(Arr);

        System.out.println("Even elements are"+iRet);
        System.out.println("Summetion is:"+iSum);


        // Important

        sobj = null;
        Arr = null;
        aobj = null;

        System.gc();
    }
}