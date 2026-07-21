
import java.util.Scanner;

// Fibonacci 
// 0    1   1   2   3   5   8   13  21  ....

class program802
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int Size = 0;
        int i = 0;
        int First = 0;
        int Second = 0;
        int Next = 0;

        System.out.println("Enter the number of element in series : ");
        Size = sobj.nextInt();

        for(i = 1, First = 0 ,Second = 1; i <= Size; i++)
        {
            System.out.print(First+"  ");

            Next = First + Second;
            First = Second;
            Second = Next;
        }

        System.out.println();
        
    }
}