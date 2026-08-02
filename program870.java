// India is my counrt i live in india
// Bharat is my county i live in india 

import java.util.*;

class program870
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

        StringBuffer finalstr = new StringBuffer();

        for(int i = 0; i < Arr.length; i++)     
        {             
            if(Arr[i].equalsIgnoreCase("india")) 
            {
                finalstr.append("Bharat"+" ");
            }  
            else
            {
                finalstr.append(Arr[i]+" ");
            }
        }

        System.out.println(finalstr);
    }
}