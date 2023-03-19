#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* CreateLinkedList(int n1)
{
    struct node* head = NULL;
    struct node* temp = NULL;
    struct node* p = NULL;
    temp = (struct node*)calloc(1,sizeof(struct node));
    int data,i;
    for(i=0;i<n1;i++)
    {
    printf("Enter Element %d:\n",i+1);
    scanf("%d",&data);
    temp->data = data;

    if(head==NULL)
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
    return head;
}

void LinkedListTraversal(struct node* ptr)
{
    struct node* p;
    p=(struct node*)calloc(1,sizeof(struct node));

    p=ptr;
    while(p!=NULL)
    {
        printf("%d\t",p->data);
        p=p->next;
    }
}

int main()
{
    int n1,n2,i,data;
    printf("Enter The First List's No. Of Elements:\n");
    scanf("%d",&n1);
    printf("Enter The Second List's No. Of Elements:\n");
    scanf("%d",&n2);

    struct node* head1 = NULL;
    struct node* head2 = NULL;
    struct node* temp = NULL;
    struct node* p = NULL;

    for(i=0;i<n1;i++)
    {
        printf("Please Enter Element %d of Linked List 1:\n",i+1);
        scanf("%d",&data);
        if(i == 0)
        {
            head1->data = data;
        }
        // else
        // {
        //     temp->data = data;
        //     p = head1;
        //     while(p->next!=NULL)
        //     {
        //         p = p->next;
        //     }
        //     p->next = temp;
        // }
    }
    LinkedListTraversal(head1);
    printf("%d\n",head1->data);
    return 0;
}