
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)

struct node
{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertLast(PPNODE first , int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)  malloc (sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp -> next != NULL)         // type 2 while loop
        {
            temp = temp -> next;
        }
         
        temp -> next = newn;
    }   
}

////////////////////////////////////////////////

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d |->",first -> data);
        first = first -> next;
    }
    printf("NULL\n");
}

////////////////////////////////////////////////

bool CheckLoop(PNODE first)
{   
    PNODE fast = first;
    PNODE slow = first;

    bool bflag = false;

    while((fast != NULL) && (fast -> next != NULL))
    {
        fast = fast -> next -> next;

        if(fast == slow)
        {
            bflag == true;
            break; 
        }

        slow = slow -> next;

        if(fast == slow)
        {
            bflag = true;
            break; 
        }
    }

    return bflag;
}

int main()
{
    PNODE head = NULL;
    int Pos = 4;
    int i = 0;
    bool bRet = false;

    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);
    InsertLast(&head,101);
    InsertLast(&head,111);
    InsertLast(&head,121);
    InsertLast(&head,151);

    bRet = CheckLoop(head);

    if(bRet == true)
    {
        printf("Loop exist\n");
    }
    else
    {
        printf("There is no loop\n");
    }

    return 0; 
}