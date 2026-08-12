// Tortoise algorithm

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

// Time complexity N+ N/2

int MiddleElementX(PNODE first)
{
    PNODE fast = NULL;
    PNODE slow = NULL;

    fast = first;
    slow = first;

    while((fast != NULL) && (fast -> next != NULL))     //N /2
    {
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow -> data;
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

    iRet = MiddleElementX(head);
    printf("Middle Element of linked list is : %d",iRet);

    return 0; 
}