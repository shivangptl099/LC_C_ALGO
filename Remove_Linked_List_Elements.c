#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* Delete_Val_In_LL(struct node* ptr,int val)
{
    struct node* p = ptr;
    struct node* q = ptr->next;
    while(q->data!=val && q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    if(q->data == val)
    {
    p->next = q->next;
    free(q);
    }
    return ptr;
}

int main()
{
    int i,n,val,x;
    printf("Enter the No. Of Elements In Linked List: \n");
    scanf("%d",&n);
    struct node* head = NULL;
    struct node* temp = NULL;
    struct node* p = NULL;
    struct node* q = NULL;
    
    for(i = 0;i<n;i++)
    {
        temp = (struct node*)calloc(1,sizeof(struct node));
        temp->next = NULL;
        
        if(head == NULL)
        {
            head = temp;
        }
        else
        {
            p = head;
            while(p->next!=NULL)
            {
                p = p->next;
            }
            p->next = temp;
        }
    }

    temp = head;
    for(i = 0;i<n;i++)
    {
        printf(" Enter Element %d : \n",i+1);
        scanf("%d",&temp->data);
        temp = temp->next;
    }
    
    printf("Enter The Value To Be Deleted From Linked List: \n");
    scanf("%d",&val);

    p = head;
    x = 0;
    while(p!=NULL)
    {
        if(p->data == val)
        {
            x++;
        }
        p = p->next;
    }

    if(n == x)
    {
        printf("Here Is The Answer Linked List...\n");
        printf("[ ]");
        return 0;
    }

    for(i = 0;i<x;i++)
    {
    head = Delete_Val_In_LL(head,val);
    }

    printf("Here Is The Answer Linked List...\n");
    printf("[ ");

    p = head;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p = p->next;
    }
    printf("]");

    return 0;
}
