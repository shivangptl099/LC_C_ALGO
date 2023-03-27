#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* DeleteDuplicatesLL(struct node* head)
{
    if(head == NULL)
    {
        return head;
    }

    struct node* temp;
    struct node* p;
    struct node* q;

    temp = head;
    p = head->next;

    while(p!=NULL)
    {
        if(temp->data == p->data)
        {   
            q = p;
            p = p->next;
            temp->next = p;
            free(q);
        }
        else
        {
            temp = p;
            p = p->next;
        }
    }
    return head;
}

int main()
{
    struct node* head = NULL;
    int i,n;
    printf("Enter The No. Of Elements In Linked List: \n");
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
            struct node* p;
            p = head;
            while(p->next!=NULL)
            {
                p = p->next;
            }
            p->next = temp;
        }
    }

    struct node* temp = head;
    for(i = 0;i<n;i++)
    {
        printf("Enter Element %d: \n",i+1);
        scanf("%d",&temp->data);
        temp = temp->next;
    }

    head = DeleteDuplicatesLL(head);

    printf("Here Is The Linked List Now...\n");
    temp = head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp = temp->next;
    }
    return 0;
}
