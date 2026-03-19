//Doubly Linear List

class node
{
    public int data;
    public node next;
    public node prev;
}

class  DoublyLL
{
    public node first;
    public int iCount;

    DoublyLL() 
    {
        System.out.println("Object of singlyLL gets Created:");

        first = null;
        this.iCount = 0;

    }

   public void InsertFirst(int no)
    {

        node newn = null;

        newn = new node();

        newn.data = no;
        newn.next = null;

        if(first == null)
        {
            first = newn;
        }
        else
        {
            newn.next = first;
            first.prev = newn;

            first = newn;
        }
        iCount++;
    
    }

   public void InsertLast(int no)
   {
        node newn = null;
        node temp = null;

        newn = new node();

        newn.data = no;
        newn.next = null;

        if(first == null)
        {
            first = newn;
        }
        else
        {
            temp = first;

            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;

            newn.prev = temp;

        }
        iCount++;
   }

   public void DeleteFirst()
   {
        node temp = null;

        if(first == null)
        {
            return;
        }
        else if (first.next == null) 
        {
            first = null;
        }
        else 
        {  
            first = first.next;

            first.prev = null;

        }

        iCount--;

        System.gc();

   }

   public void DeleteLast()
   {
        node temp = null;

        if(first == null)
        {
            return;
        }
        else if (first.next == null) 
        {
            first = null;
        }
        else 
        {  
            temp = first;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }

            temp.next = null;

        }
        
        iCount--;

        System.gc();
   }

   

   public void Display()
   {    
        node temp = null;

        temp = first;

        while(temp != null)
        {
            System.out.print("| "+temp.data+" |->");

            temp = temp.next;
        }
        System.out.println("null");

   }

   public int Count()
   {    
        return iCount;

   }

   public void InsertAtPos(int no,int pos)
   {
        node newn = null;
        node temp = null;

        newn = new node();

        newn.data = no;
        newn.next = null;

        int iCnt = 0;

        if(pos < 1 || pos > iCount+1)
        {
            System.out.println("Invalid Position");
            return;
        }
        if(pos == 1)            //iCount == 1
        {
            InsertFirst(no);
        }
        else if(pos ==  iCount +1)
        {
            InsertLast(no);
        }
        else
        {
            temp = first;

            for(iCnt = 1;iCnt<pos - 1 ;iCnt++)
            {
                temp = temp.next;
            }
            newn.next = temp.next;

            temp.next.prev = newn;

            temp.next = newn;

            newn.prev = temp;

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

            target.next.prev = temp;

            System.gc();

            iCount--;

        }
   }

}

class program450
{
    public static void main(String Arr[])
    {
        DoublyLL obj = null;

        obj = new DoublyLL();
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
