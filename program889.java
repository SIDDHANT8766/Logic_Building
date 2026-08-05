
import java.util.*;

class Student
{
    public String name;
    public int marks;

    public Student(String A, int B)
    {
        this.name = A;
        this.marks = B;
    }

    @Override   //
    public String toString()            // 
    {
        return this.name+" : "+this.marks;  // 
    }

}

class program889
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in); 

        ArrayList <Student> aobj = new ArrayList<Student>();

        Student s1 = new Student("sagar",90);
        Student s2 = new Student("rahul",80);
        Student s3 = new Student("pooja",92);
        Student s4 = new Student("amit",72);

        aobj.add(s1);
        aobj.add(s2);
        aobj.add(s3);
        aobj.add(s4);

        int iMax = 0;
        String HighName = null; 
             // OR
        Student temp = null;

        for(Student s : aobj)
        {
            if(s.marks > iMax)
            {
                iMax = s.marks;
                HighName = s.name;
                   // OR
                temp = s;
            }
            
        }

        System.out.println("Highest marks & name is : "+HighName+" : "+iMax);
                // OR
        System.out.println(temp);    

        aobj.clear();   // 
        sobj.close();
    }
}