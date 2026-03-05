
import java.util.*;

class StringX
{
    public String Update(String str)
    {
        char Arr[] = str.toCharArray();

        Arr[0] = '_';   

        return  new String(Arr);     // Change  // Arr in to String return 
    }
}

class program253
{
    public static void main(String A[])
    {
        String sRet = null;

        Scanner scanobj = new Scanner(System.in);
        
        System.out.println("Enter string:");
        String sobj = scanobj.nextLine();

        char Arr[] = sobj.toCharArray(); 
       
        StringX strobj = new StringX();
        sRet = strobj.Update(sobj);

        System.out.println("Updated String is:"+sRet);
    
    }
}