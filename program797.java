// Scenario 2 : Bank

import java.util.*;

class program797
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
      
        System.out.println("Please enter your current balance : ");
        int Current_Balance = sobj.nextInt();
 
        System.out.println("Please enter amount that you want withdraw : ");
        int Withdraw_Amount = sobj.nextInt();

        if(Current_Balance < 0 || Withdraw_Amount <= 0)
        {
            System.out.println("Invalide input");
            return;
        }

        if(Withdraw_Amount % 100 != 0)
        {
            System.out.println("Transaction Failed : Withdrawal amount must be a multiple of 100");
        }
        else if(Withdraw_Amount > 25000)
        {
            System.out.println("Transaction Failed : Maximum withdrawal per transactio is 25000");
        }
        else if(Current_Balance - Withdraw_Amount < 1000) 
        {
            System.out.println("Transaction Failed : After withdrawal ,balance must remains at least 1000");
        }
        else 
        {
            System.out.println("Transaction Successful");
            System.out.println("Remaining balance : "+(Current_Balance - Withdraw_Amount));
        }
    }
}