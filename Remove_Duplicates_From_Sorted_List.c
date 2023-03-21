#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node* next;
};

int main()
{
    int i,n;
    printf("How Many Elements Are there In your Sorted Linked List: \n");
    scanf("%d",&n);

    struct node* head = NULL;
    struct node* temp = NULL;
    struct node* p = NULL;

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
        printf("Enter The Element %d: \n",i+1);
        scanf("%d",&temp->data);
        temp = temp->next;
    }

    struct node* a = head;
    struct node* b = head->next;
    while(a->next!=NULL)
    {
        b = a->next;
        if(a->data == b->data)
        {
            a->next = b->next;
            free(b);
        }
        a = a->next;
    }

    p = head;
    while(p!=NULL)
    {
        printf("%d\t",p->data);
        p = p->next;
    }
   
    return 0;
}