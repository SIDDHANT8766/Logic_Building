// Scenario 4 : Electricity bill

import java.util.*;

class program799
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
      
        int Units = 0;
        int Amount = 0;

        System.out.println("Enter the units consumed : ");
        Units = sobj.nextInt();

        if(Units < 0)
        {
            System.out.println("Units Cannot be negative");
            return;
        }

        System.out.println("Total Unit Consumed : "+Units);

        if(Units <= 100)
        {
            Amount = Units * 5;
        }
        else if(Units > 100 && Units <= 200)
        {
                      // 500 fixed
            Amount = (100 * 5) + ((Units - 100) * 7);
        }
        else if(Units > 200)
        {
                      // 500 fixed // 700 fixed
            Amount = ((100 * 5) + (100 * 7)) + ((Units - 200) * 10);
        }

        System.out.println("Total Electricity Bill : "+Amount);

        sobj.close();
    }
}