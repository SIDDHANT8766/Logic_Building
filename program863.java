import java.util.*;

class program863
{
    public static void main(String A[])    
    {
        Scanner sobj = new Scanner(System.in);
        String str = null;

        // Step 0
        System.out.println("Enter the string : ");
        str = sobj.nextLine();

        // Step 1
        str = str.trim();

        // Step 2
        str = str.replaceAll("\\s+", " ");

        // Step 3
        String Arr[] = str.split(" ");

        int iCount = 0;

        for(int i = 0; i < Arr.length; i++)     // 
        {             // ingnore's the camel case
            if(Arr[i].equalsIgnoreCase("india") == true)
            {
                iCount++;
            }   
        } 
        
        System.out.println("Freuency of word india is : "+iCount); 

    }
}