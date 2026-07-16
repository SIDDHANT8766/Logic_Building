
import java.util.Scanner;

/*
    iPos1 = 2
    iPos2 = 4

    iNo =    0  1  1  0

    iMask1 = 0  0  1  0
    iMask2 = 1  0  0  0

    iMask = iMask1 | iMask2
    0  0  1  0     iMask1   
    1  0  0  0  |  iMask2   
    ------------
    1  0  1  0 = iMask

    
    iNo = iNo ^ iMask;
    0  1  1  0
    1  0  1  0  ^  iMask
    -------------
    1  1  0  0  =  iNo 

*/ 

class program639
{
    public static void main(String A[])
    {
        int iNo = 0, iMask1 = 0, iMask2 = 0 , iMask = 00;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iNo = sobj.nextInt();

        iMask1 = 0x00000002;
        iMask2 = 0x00000008;

        iMask = iMask1 | iMask2;

        iNo = iNo ^ iMask;

        System.out.println("Updated number is :"+iNo);
    }
}