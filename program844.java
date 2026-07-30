
import java.util.*;

class program844
{
    public static void main(String A[])
    {
        String str = "    Hello    Worlld    ";

        System.out.println(str);
        str = str.trim();

        str = str.replaceAll("ll", "LL");

        System.out.println(str);
        System.out.println(str.length());
    }
}