import java.util.*;

class program856
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

        for(int i = Arr.length -1 ; i >= 0; i--)     // 
        {
            System.out.println(Arr[i]);
        }  
    }
}