import java.util.*;

class program868
{
    public static void main(String A[])    
    {
        Scanner sobj = new Scanner(System.in);
        String str = null;

        System.out.println("Enter the string : ");
        str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+", " ");

        String Arr[] = str.split(" ");

        StringBuffer sb = null;
        StringBuffer Finalstr = new StringBuffer();

        for(int i = 0; i < Arr.length; i++)     
        {             
            sb = new StringBuffer(Arr[i]);
            (Finalstr.append(sb.reverse())).append(" ");
        }

        System.out.println(Finalstr);
        System.out.println(Finalstr.length());
        System.out.println(str.length());
    }
}