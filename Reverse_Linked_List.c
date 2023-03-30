#include<stdio.h>
#include<malloc.h>

struct node
{
    struct node* next;
    int data;
};

struct node* reverseList(struct node* head){
    struct node* head1 = NULL;
    struct node* p;
    struct node* q;
    p = head;
    int x = 0;
    while(p!=NULL)
    {
        x++;
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->next = NULL;

        if(head1 == NULL)
        {
            head1 = temp;
        }
        else
        {
            q = head1;
            while(q->next!=NULL)
            {
                q = q->next;
            }
            q->next = temp;
        }
        p = p->next;
    }
    int i;
    int* arr = (int*)malloc(x*sizeof(int));
    p = head;
    for(i = 0;i<x;i++)
    {
        arr[i] = p->data;
        p = p->next;
    }  
    q = head1;
    for(i = x-1;i>=0;i--)
    {
        q->data = arr[i];
        q = q->next;
    }
    return head1;
}

int main()
{
    struct node* head = NULL;
    struct node* p;
    int i,n;
    printf("How Many Elements Are There In Linked List: \n");
    scanf("%d",&n);
    for(i = 0;i<n;i++)
    {
        struct node* temp = (struct node*)malloc(sizeof(struct node));
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
    p = head;
    i = 0;
    while(p!=NULL)
    {
        printf("Enter Element %d: \n",i+1);
        scanf("%d",&p->data);
        p = p->next;
        i++;
    }
    struct node* head1;
    p = reverseList(head);
    printf("Here Is The Reversed Linked List...\n");
    while(p!=NULL)
    {
        printf("%d\t",p->data);
        p = p->next;
    }
    return 0;
}