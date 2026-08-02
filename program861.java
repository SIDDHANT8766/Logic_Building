import java.util.*;

class program861
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

        int iMax = 0;
        int MaxIndex = 0;

        for(int i = 0; i < Arr.length; i++)     // 
        {
            if(Arr[i].length() > iMax)
            {
                iMax = Arr[i].length();
                MaxIndex = i;
            }
        }  

        System.out.println("Longest length of word is : "+iMax);
        System.out.println("Longest word is : "+Arr[MaxIndex]);
    }
}