#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct ListNode
{
    struct ListNode* next;
    int val;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* p = l1;
    struct ListNode* q = l2;
    int n1,n2,i,j,k,l,sum1,sum2,sum,count,temp,r;
    n1 = 0;
    n2 = 0;
    while(p!=NULL || q!=NULL)
    {
        if(p!=NULL)
        {
            n1++;
            p = p->next;
        }
        if(q!=NULL)
        {
            n2++;
            q = q->next;
        }
    }
    sum1 = 0;
    sum2 = 0;
    p = l1;
    q = l2;
    j = 0;
    l = 0;
    while(p!=NULL || q!=NULL)
    {
        if(p!=NULL)
        {
            temp = 1;
        for(i = j;i<n1-1;i++)
        {
            temp = temp*10;
        }
        sum1 = sum1 + (temp*p->val);
        j++;
        p = p->next;
        }
        if(q!=NULL)
        {
            temp = 1;
        for(k = l;i<n2-1;k++)
        {
            temp = temp*10;
        }
        sum2 = sum2 + (temp*q->val);
        l++;
        q = q->next;
        }
    }
    sum = sum1 + sum2;
    count = (sum == 0)?1:(log10(sum)+1);
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
            p = l3;
            while(p->next!=NULL)
            {
                p = p->next;
            }
            p->next = temp1;
        }
        i++;
    }
    p = l3;
    while(sum>0)
    {
        r = sum % 10;
        p->val = r;
        sum = sum / 10;
        p = p->next;
    }
    return l3;
}

int main()
{
    return 0;
}
