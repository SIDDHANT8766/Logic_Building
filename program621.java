
import java.util.Scanner;

class program621
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int no = 0;
        int ibinary = 0;
        int iCount = 0;

        System.out.println("Enter your number :");
        no = sobj.nextInt();

        while(no != 0)
        {
            ibinary = no % 2;
            iCount = iCount + ibinary;         // We can use if(--) condition also
            no = no / 2;
        }

        System.out.println(" ");

        System.out.println("Number of 1 are :"+iCount);
    }
}