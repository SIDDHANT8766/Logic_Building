//Singly Circular Linked List

class node
{
    public int data;
    public node next;

    public node(int no)
    {
        data = no;
        next = null;
    }
}

class SinglyCL
{
    public node first;
    public node last;
    public int iCount;

    SinglyCL() 
    {
        System.out.println("Object of singlyLL gets Created:");

        first = null;
        last = null;
        this.iCount = 0;

    }

   public void InsertFirst(int no)
    {

        node newn = null;

        newn = new node(no);


        if((first == null) && (last == null))
        {
            first = newn;
            last = newn;
        }
        else
        {
            newn.next = first;
            first = newn;

            
        }
        last.next = first;

        iCount++;
    
    }

   public void InsertLast(int no)
   {
        node newn = null;
        node temp = null;

        newn = new node(no);

        if((first == null) && (last == null))
        {
            first = newn;
            last = newn;
        }
        else
        {
            last.next = newn;

            last = newn;

        }

        last.next = first;

        iCount++;
   }

   public void DeleteFirst()
   {
        node temp = null;

        if((first == null) && (last == null))       //iCount == 0
        {
            return;
        }
        else if (first == last) 
        {
            first = null;
            last = null;
        }
        else 
        {  
            first = first.next;

        }

        last.next = first;

        iCount--;

        System.gc();

   }

   public void DeleteLast()
   {
        node temp = null;

        if(first == null && (last == null))        //iCount == 0
        {
            return;
        }
        else if (first == last) 
        {
            first = null;
            last = null;
        }
        else 
        {  
            temp = first;

            while(temp.next != last)
            {
                temp = temp.next;
            }

            temp = last;
        }

        last.next = first;
        
        iCount--;

        System.gc();
   }

   

   public void Display()
   {    
        node temp = null;

        temp = first;

        do
        {
            System.out.print("| "+temp.data+" |->");

            temp = temp.next;
        }while(temp != last.next);

        System.out.println();

   }

   public int Count()
   {    
        return iCount;

   }

   public void InsertAtPos(int no,int pos)
   {
        node newn = null;
        node temp = null;

        newn = new node(no);

        int iCnt = 0;

        if(pos < 1 || pos > iCount+1)
        {
            System.out.println("Invalid Position");
            return;
        }
        if(pos == 1)            //iCount == 1
        {
            DeleteFirst();
        }
        else if(pos ==  iCount +1)
        {
            DeleteLast();
        }
        else
        {
            temp = first;

            for(iCnt = 1;iCnt<pos - 1 ;iCnt++)
            {
                temp = temp.next;
            }
            newn.next = temp.next;

            temp.next = newn;

            iCount++;

        }

   }

   public void DeleteAtPos(int pos)
   {
        node temp = null;
        node target = null;

        int iCnt = 0;

        if(pos < 1 || pos > iCount)
        {
            System.out.println("Invalid Position");
            return;
        }
        if(pos == 1)            //iCount == 1
        {
            DeleteFirst();
        }
        else if(pos ==  iCount)
        {
            DeleteLast();
        }
        else
        {
            temp = first;

            for(iCnt = 1;iCnt<pos -1 ;iCnt++)
            {
                temp = temp.next;
            }
            target = temp.next;         //temp.next = temp.next.next

            temp.next = target.next;

            System.gc();

            iCount--;

        }
   }

}

class program268
{
    public static void main(String Arr[])
    {
        SinglyCL obj = null;

        obj = new SinglyCL();
        int iRet = 0;

        obj.InsertFirst(51);
        obj.InsertFirst(41);
        obj.InsertFirst(31);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();

        iRet = obj.Count();

        System.out.println("Number of Nodes are:"+iRet);

        obj.InsertLast(101);
        obj.InsertLast(111);

        obj.Display();

        iRet = obj.Count();

        System.out.println("Number of Nodes are:"+iRet);

        obj.DeleteFirst();

        obj.Display();

        iRet = obj.Count();

        System.out.println("Number of Nodes are:"+iRet);

        obj.DeleteLast();

        obj.Display();

        iRet = obj.Count();

        System.out.println("Number of Nodes are:"+iRet);

        obj.InsertAtPos(140, 4);
        
        obj.Display();

        iRet = obj.Count();

        System.out.println("Number of Nodes are:"+iRet);

        obj.DeleteAtPos(3);

        obj.Display();

        iRet = obj.Count();

        System.out.println("Number of Nodes are:"+iRet);


    }
    
}
