// ArmStrong number

import java.util.*;

class program821
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int x = 0, y = 0;
        int i = 0, iPow = 0;

        System.out.println("Enter the base number : ");
        x = sobj.nextInt();

        System.out.println("Enter the exponent (power) number : ");
        y = sobj.nextInt();

        // x = 5  y = 3

        for(iPow = 1, i = 1; i <= y; i++)
        {
            iPow = iPow * x;
        }

        System.out.println(iPow);
    }
}