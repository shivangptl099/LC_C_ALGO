#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct ListNode
{
    struct ListNode* next;
    int val;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* p1 = l1;
    struct ListNode* p2 = l2;
    int n1,n2;
    n1 = 0;
    n2 = 0;
    while(p1!=NULL || p2!=NULL)
    {
        if(p1!=NULL)
        {
            n1++;
            p1 = p1->next;
        }
        if(p2!=NULL)
        {
            n2++;
            p2 = p2->next;
        }
    }
    if(n1 == 1 && n2 == 1)
    {
        struct ListNode* l3 = (struct ListNode*)malloc(sizeof(struct ListNode));
        l3->val = (l1->val + l2->val);
        l3->next = NULL;
        return l3;
    }
    int i,j,k,l,sum1,sum2,temp;
    j = 0;
    l = 0;
    p1 = l1;
    p2 = l2;
    sum1 = 0;
    sum2 = 0;
    while(p1!=NULL || p2!=NULL)
    {
        if(p1!=NULL)
        {   temp = 1;
            for(i = j;i<n1-1;i++)
            {
                temp = temp * 10;
            }
            sum1 = sum1 + (temp*p1->val);
            j++;
            p1 = p1->next;
        }
        if(p2!=NULL)
        {   temp = 1;
            for(k = l;k<n2-1;k++)
            {
                temp = temp * 10;
            }
            sum2 = sum2 + (temp*p2->val);
            l++;
            p2 = p2->next;
        }
    }
    int sum = sum1 + sum2;
    int count = (sum == 0)?1:(log10(sum)+1);
    struct ListNode* l3 = NULL;
    i = 0;
    while(i<count)
    {
        struct ListNode* temp1 = (struct ListNode*)malloc(sizeof(struct ListNode));
        temp1->next = NULL;
        if(l3 == NULL)
        {
            l3 = temp1;
        }
        else
        {
            p1 = l3;
            while(p1->next!=NULL)
            {
                p1 = p1->next;
            }
            p1->next = temp1;
        }
        i++;
    }
    p1 = l3;
    while(sum>0)
    {
        int r = sum % 10;
        p1->val = r;
        sum = sum / 10;
        p1 = p1->next;
    }
    return l3;
}

int main()
{
    struct ListNode* head1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* head2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* a = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* b = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* p = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* q = (struct ListNode*)malloc(sizeof(struct ListNode));

    head1->val = 2;
    a->val = 4;
    b->val = 3;
    head2->val = 5;
    p->val = 6;
    q->val = 4;

    head1->next = a;
    a->next = b;
    b->next = NULL;

    head2->next = p;
    p->next = q;
    q->next = NULL; 

    struct ListNode* l3 = addTwoNumbers(head1,head2);
    while(l3!=NULL)
    {
        printf("%d\t",l3->val);
        l3 = l3->next;
    }
    return 0;
}
