#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct node{
    int data;
    struct node* next;
};

struct node* CreateLinkedList(int n){
    struct node* head = NULL;
    struct node* temp = NULL;
    struct node* p = NULL;
    int count = (n == 0)?1:(log10(n)+1);

    for(int i=0;i<count;i++)
    {
        temp = (struct node*)calloc(1,sizeof(struct node));
        temp->next = NULL;
        if(head==NULL)
        {
            head = temp;
        }
        else
        {
            p=head;
            while(p->next!=NULL)
            {
                p=p->next;
            }
            p->next = temp;
        }
    }
    p = head;
    while(p!=NULL)
    {
        int r = n%10;
        p->data = r;
        n = n/10;
        p = p->next;
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

int main(){
    int n1,n2,sum;
    printf("Enter First Number:\n");
    scanf("%d",&n1);
    printf("Enter Second Number:\n");
    scanf("%d",&n2);

    sum = n1+n2;
    struct node* head1 = CreateLinkedList(n1);
    struct node* head2 = CreateLinkedList(n2);
    struct node* head3 = CreateLinkedList(sum);

    printf("The First Number In reverse is represented as Linked List Given Below:\n");
    LinkedListTraversal(head1);
    printf("\n");
    printf("The Second Number In reverse is represented as Linked List Given Below:\n");
    LinkedListTraversal(head2);
    printf("\n");
    printf("The Sum In reverse is represented as Linked List Given Below:\n");
    LinkedListTraversal(head3);
    return 0;
}