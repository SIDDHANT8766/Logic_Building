
import java.util.Scanner;

class program619
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int no = 0;
        int ibinary = 0;

        System.out.println("Enter your number :");
        no = sobj.nextInt();

        while(no != 0)
        {
            ibinary = no % 2;
            System.out.printf("%d\t",ibinary);
            no = no / 2;
        }

        System.out.println(" ");
    }
}