
import java.util.Scanner;

class program620
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int no = 0;
        int ibinary = 0;
        int oCount = 0;
        int zCount = 0;

        System.out.println("Enter your number :");
        no = sobj.nextInt();

        while(no != 0)
        {
            ibinary = no % 2;
            System.out.printf("%d\t",ibinary);

            if(ibinary == 1)
            {
                oCount++;
            }

            if(ibinary == 0)
            {
                zCount++;
            }

            no = no / 2;
        }

        System.out.println(" ");


        System.out.println("Number of 1 are :"+oCount);
        System.out.println("Number of 0 are :"+zCount);
    }
}