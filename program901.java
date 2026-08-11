import java.util.*;
import java.time.LocalDate;
import java.time.LocalDateTime;
import java.io.*;

// DONE
class StudyLog
{
    private LocalDate Date;
    private String Subject;
    private double Duration;
    private String Description;

    public StudyLog(LocalDate a, String b, double c, String d)
    {
        this.Date = a;
        this.Subject = b;
        this.Duration = c;
        this.Description = d;
    }

    public LocalDate getDate()
    {
        return this.Date;
    }

    public String getSubject()
    {
        return this.Subject;
    }

    public double getDuration()
    {
        return this.Duration;
    }

    public String getDescription()
    {
        return this.Description;
    }

    @Override
    public String toString()
    {
        return Date+" | "+Subject+" | "+Duration+" | "+Description;
    }
}

class StudyTracker
{
    public ArrayList <StudyLog>Database = new ArrayList<StudyLog>();

    public void InsertLog()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("--------------------------------------------------------");
        System.out.println("----------- Enter Valid Details of Your Study ----------");
        System.out.println("--------------------------------------------------------");

        LocalDate Dateobj = LocalDate.now();

        System.out.println("Please Enter the name of subject like C/C++/Java/Python");
        String sub = sobj.nextLine();

        System.out.println("Enter the time period of your study in hours : ");
        double dur = sobj.nextDouble();

        sobj.nextLine();

        System.out.println("Please provide the description of the study : ");
        String desc = sobj.nextLine();

        StudyLog studyobj = new StudyLog(Dateobj, sub, dur, desc);

        Database.add(studyobj);

        System.out.println("Study Log gets Stored Sucessfully");
        System.out.println("--------------------------------------------------------");
    }

    public void DisplayLog()
    {
        System.out.println("--------------------------------------------------------");

        if(Database.isEmpty())
        {
            System.out.println("------------------- Nothing to Display -----------------");
            System.out.println("--------------------------------------------------------");
            return;
        }

        System.out.println("-------- Log Report of Marvellous Study Tracker --------");
        System.out.println("--------------------------------------------------------");

        for(StudyLog s : Database)
        {
            System.out.println(s);
        }

        System.out.println("--------------------------------------------------------");
    }

    public void ExportCSV()
    {
        if(Database.isEmpty())
        {
            System.out.println("--------------------------------------------------------");
            System.out.println("-------------------- Nothing to Export -----------------");
            System.out.println("--------------------------------------------------------");
            return;
        }

        String FileName = "MarvellousStudyTracker.csv";

        try(FileWriter fwobj = new FileWriter(FileName))
        {
            fwobj.write("Date,Subject,Duration,Description\n");

            for(StudyLog s : Database)
            {
                fwobj.write(s.getDate()+ "," 
                            +s.getSubject().replace(",", " ")+ "," 
                            +s.getDuration()+ "," 
                            +s.getDescription().replace(",", " ")+"\n");
            }

            System.out.println("Data get Exported in CSV : "+FileName);
            
        } 
        catch (Exception eobj) 
        {
            System.out.println("Exception occured in CSV handling ");
        }
    }


    public void SummarybyDate()
    {

    }

    public void SummarybySubject()
    {
        System.out.println("--------------------------------------------------------");

        if(Database.isEmpty())
        {
            System.out.println("------------------- Nothing to Display -----------------");
            System.out.println("--------------------------------------------------------");
            return;
        }

        System.out.println("-------- Summary bu Subject from Study Tracker ---------");
        System.out.println("--------------------------------------------------------");

        TreeMap <String,Double>tobj = new TreeMap<String,Double>();

        String s = null;
        double d = 0.0, old = 0.0;

        for(StudyLog sobj : Database)
        {
            s = sobj.getSubject();
            d = sobj.getDuration();

            if(tobj.containsKey(s))
            {
                old = tobj.get(s);
                tobj.put(s,d+old);
            }
            else
            {
                tobj.put(s,d);
            }
        }

        // Display the details as per subject
        for(String str : tobj.keySet())
        {
            System.out.println("Subject : "+str+" Total study durstion : "+tobj.get(str));
        }

        System.out.println("--------------------------------------------------------");        
    }
}

class program901
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        StudyTracker stobj = new StudyTracker();

        System.out.println("--------------------------------------------------------");
        System.out.println("---------- Welcome to Marvellous Study Tracker ---------");
        System.out.println("--------------------------------------------------------");

        int iChoice = 0;

        do
        {
            System.out.println("Please Select Appropriate Option : ");
            System.out.println("1 : Insert new Study log");
            System.out.println("2 : View all Study log");
            System.out.println("3 : Export Study log to CSV File");
            System.out.println("4 : Summary of Study log by date");
            System.out.println("5 : Summary of Study log by subject");
            System.out.println("6 : Exit the application");

            iChoice = sobj.nextInt();

            switch(iChoice)
            {
                // Insert new Study log
                case 1 :
                    stobj.InsertLog();;
                    break; 

                    // 
                case 2 :
                    stobj.DisplayLog();
                    break; 

                case 3:
                    stobj.ExportCSV();
                    break; 

                    // Summary by Date
                case 4:
                    stobj.SummarybyDate();
                    break; 

                    // Summary by Sub
                case 5:
                    stobj.SummarybySubject();
                    break;

                case 6:
                    System.out.println("--------------------------------------------------------");
                    System.out.println("----- Thankyou for using marvellous study Tracker ------");
                    break;

                default:
                    System.out.println("Please enter velid option");
                    break;
                
            }
        }while(iChoice != 4);   // End of while

    }  // End of main
} // End of Class