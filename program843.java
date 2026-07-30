
import java.util.*;

class program843
{
    public static void main(String A[])
    {
        String str = "    Hello    World    ";

        System.out.println(str);
        str = str.trim();

        str = str.replaceAll("l", "L");

        System.out.println(str);
        System.out.println(str.length());
    }
}