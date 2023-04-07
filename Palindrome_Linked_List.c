#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node* next;
    int data;
};

int isPalindrome(struct node* head){
    struct node* temp = head;
    int i = 0;
    while(temp!=NULL)
    {
        i++;
        temp = temp->next;
    }
    int z = i;
    int *arr = (int*)malloc(z*sizeof(int));
    temp = head;
    i = 0;
    while(temp!=NULL)
    {
        arr[i] = temp->data;
        i++;
        temp = temp->next;
    }
    int j = z-1;
    for(i = 0;i<(z/2);i++)
    {
        if(arr[i] != arr[j])
        {
            return 0;
        }
        j--;
    }
    return 1;
}

int main()
{
    int i,n;
    printf("How Many Elements Are There In Your Linked List?\n");
    scanf("%d",&n);
    struct node* head = NULL;
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
            struct node* p = head;
            while(p->next!=NULL)
            {
                p = p->next;
            }
            p->next = temp;
        }
    }
    struct node* p = head;
    i = 1;
    while(p!=NULL)
    {
        printf("Enter Element %d:\n",i);
        scanf("%d",&p->data);
        p = p->next;
        i++;
    }
    int s = isPalindrome(head);
    if(s == 1)
    {
        printf("The Linked List Is Palindrome.\n");
    }
    else
    {
        printf("The Linked List Is Not Palindrome.\n");
    }
    return 0;
}
