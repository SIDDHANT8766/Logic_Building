#include<stdio.h>
#include<stdlib.h>
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

/////////////////////////////////////////////////
int MiddleElement(PNODE first)
{
    int iCount = 0;
    int Middle = 0;
    int i = 0;
    PNODE temp = NULL;

    temp = first;

    while(first != NULL)
    {
        iCount++;
        first = first -> next;
    }

    Middle = (iCount/2) + 1;

    first = temp;

    for(i = 1; i < Middle; i++)
    {
        first = first -> next;
    }

    return first -> data;
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d |->",first -> data);
        first = first -> next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);
    InsertLast(&head,101);
    InsertLast(&head,111);

    Display(head);

    iRet = MiddleElement(head);
    printf("Middle Element of linked list is : %d",iRet);

    return 0; 
}