// Scenario 3 : University marks

import java.util.*;

class program798
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
      
        int Marks[] = new int[5];
        int i = 0;
        int iSum = 0;

        boolean Pass = true;
        boolean Invalide = false;

        System.out.println("Enter marks : ");

        for(i = 0; i < Marks.length; i++)
        {
            Marks[i] = sobj.nextInt();

            if(Marks[i] < 35)  // Check direct while inserting
            {
                Pass = false;
            }

            if(Marks[i] < 0 || Marks[i] > 100)  // Check direct while inserting
            {
                Invalide = true;
            }


            iSum = iSum + Marks[i];
        }

        if(Invalide == true)
        {
            System.out.println("Invalid Marks");
            return;
        }

        if(Pass == false)
        {
            System.out.println("Result : Fail");
            return;
        }

        float Average = ((float)iSum / (float)5);

        System.out.println("Average Marks : "+Average);

        if(Average >= 75.0f)
        {
            System.out.println("Final Result : Destinction");
        }
        else if(Average >= 60.0f)
        {
            System.out.println("Final Result : First Class");
        }
        else if(Average >= 50.0f)
        {
            System.out.println("Final Result : Second Class");  
        }
        else if(Average < 50.0f)
        {
            System.out.println("Final Result : Pass");
        }

        sobj.close();
    }
}