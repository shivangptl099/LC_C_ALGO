#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

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
    int n1,n2,i;
    int x,y;
    printf("Enter The First List's No. Of Elements:\n");
    scanf("%d",&n1);
    printf("Enter The Second List's No. Of Elements:\n");
    scanf("%d",&n2);

    if(n1 == 0 & n2 == 0)
    {
        printf("This Is Final Linked List.\n");
        printf("[]");
        return 0;
    }
    else if(n1 == 0 || n2 == 0)
    {   int *arr1 = (int*)calloc(1,sizeof(int));
        for(i = 0;i<n1+n2;i++)
        {
            printf("Please Enter The element %d: \n",i+1);
            scanf("%d",&arr1[i]);
        }
        printf("This Is Final Linked List.\n");
        for(i = 0;i<n1+n2;i++)
        {
            printf("%d\t",arr1[i]);
        }
        return 0;
    }
    struct node* head1 = NULL;
    struct node* head2 = NULL;
    struct node* temp = NULL;
    struct node* p = NULL;

    for(i = 0;i<n1;i++)
    {
        struct node*temp;
        temp = (struct node*)calloc(1,sizeof(struct node));
        temp->next = NULL;
        if(head1 == NULL)
        {
            head1 = temp;
        }
        else
        {   
            p = head1;
            while(p->next!=NULL)
            {
                p = p->next;
            }
            p->next = temp;
        }
    }
    temp = head1;
    for(i = 0;i<n1;i++)
    {   
        printf("Enter The Element %d of List 1: \n",i+1);
        scanf("%d",&temp->data);
        temp = temp->next;
    }

    for(i = 0;i<n2;i++)
    {
        struct node*temp;
        temp = (struct node*)calloc(1,sizeof(struct node));
        temp->next = NULL;
        if(head2 == NULL)
        {
            head2 = temp;
        }
        else
        {   
            p = head2;
            while(p->next!=NULL)
            {
                p = p->next;
            }
            p->next = temp;
        }
    }
    temp = head2;
    for(i = 0;i<n2;i++)
    {   
        printf("Enter The Element %d of List 2: \n",i+1);
        scanf("%d",&temp->data);
        temp = temp->next;
    }

    temp = head1;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = head2;

    int arr[n1+n2];
    i = 0;
    temp = head1;
    while(temp!=NULL)
    {
        arr[i] = temp->data;
        i++;
        temp = temp->next;
    }

    int j = 0;
    int z = n1+n2;
    int s;
    for(i = 0;i<z;i++)
    {
        for(j = i+1;j<z;j++)
        {
            if(arr[i] > arr[j])
            {
                s = arr[i];
                arr[i] = arr[j];
                arr[j] = s;
            }
        }
    }

    struct node*head3 = NULL;
    for(i = 0;i<z;i++)
    {
        struct node*temp;
        temp = (struct node*)calloc(1,sizeof(struct node));
        temp->next = NULL;
        if(head3 == NULL)
        {
            head3 = temp;
        }
        else
        {   
            p = head3;
            while(p->next!=NULL)
            {
                p = p->next;
            }
            p->next = temp;
        }
    }
    temp = head3;
    for(i = 0;i<z;i++)
    {   
        temp->data = arr[i];
        temp = temp->next;
    }
    printf("This Is Final Linked List.\n");
    LinkedListTraversal(head3);
    return 0;
}