#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

int main()
{
    int i,n,val;
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
    q = head->next;

    while(p->next!=NULL)
    {
        while(q->data!=val)
        {
            p = p->next;
            q = q->next;
        }
        if(q->data == val)
        {
        p->next = q->next;
        free(q);
        }
        p = p->next;
    }

    temp = head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp = temp->next;
    }

    return 0;
}