// ArmStrong number

import java.util.*;

class program822
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

        iPow = 1;

        // x = 5  y = 3
        while(y != 0)   
        {
            iPow = iPow * x;
            y--;
        }

        System.out.println(iPow);
    }
}