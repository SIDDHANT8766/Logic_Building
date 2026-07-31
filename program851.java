
import java.util.*;

class program851
{
    public static void main(String A[])
    {
        String str = "  India   is   My  Country  ";

        System.out.println(str.length());

        System.out.println(str);
        str = str.trim();

        str = str.replaceAll("\\s+", " ");   // Khupch Imp

        String Arr[] = str.split(" ");

        for(int i = 0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }

        System.out.println(Arr.length);
    }
}