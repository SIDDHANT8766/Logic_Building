import java.util.*;

class program858
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
        String word = null;

        for(int i = 0; i < Arr.length; i++)     // 
        {
            System.out.println(Arr[i] + " : "+Arr[i].length());

            if(Arr[i].length() > iMax)
            {
                iMax = Arr[i].length();
                word = Arr[i];
            }
        }  

        System.out.println("Maximum length of word is : "+iMax);
        System.out.println(word);
    }
}