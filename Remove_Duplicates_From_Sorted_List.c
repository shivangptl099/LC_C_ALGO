#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

int main()
{
    int i,j,n;
    printf("How Many Elements Are there In your Sorted Linked List: \n");
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
        printf("Enter The Element %d: \n",i+1);
        scanf("%d",&temp->data);
        temp = temp->next;
    }

    temp = head;
    p = head->next;
    while(p->next!=NULL)
    {
        if(temp->data == p->data)
        {
            q = temp->next;
            temp->next = p->next;
            free(q);
        }
        temp = temp->next;
        p = temp->next;
    }

    temp = head;
    p = head->next;
    while(p->next!=NULL)
    {
        temp = temp->next;
        p = p->next;
    }
    if(temp->data == p->data)
    {
        temp->next = NULL;
        free(p);
    }

    p = head;
    while(p!=NULL)
    {
        printf("%d\t",p->data);
        p = p->next;
    }
   
    return 0;
}
