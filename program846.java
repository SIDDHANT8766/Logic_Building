
import java.util.*;

class program846
{
    public static void main(String A[])
    {
        String str = "  India   is   My  Country  ";

        System.out.println(str);
        str = str.trim();

        str = str.replaceAll(" ", "");

        System.out.println(str);
        System.out.println(str.length());
    }
}