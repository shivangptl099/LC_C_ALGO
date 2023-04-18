#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct ListNode
{
    struct ListNode* next;
    int val;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* temp = l1;
    int p;
    while(temp!=NULL)
    {
        p++;
        temp = temp->next;
    }
    int q;
    temp = l2;
    while(temp!=NULL)
    {
        q++;
        temp = temp->next;
    }
    int i;
    int* arr = (int*)malloc(p*sizeof(int));
    temp = l1;
    for(i = 0;i<p;i++)
    {
        arr[i] = temp->val;
        temp = temp->next;
    }
    int sum1 = 0;
    int x = 1;
    for(i = p-1;i>=0;i--)
    {
        if(i == p-1)
        {
            sum1 = sum1 + arr[i];
        }
        else
        {
            x = x*10;
            sum1 = sum1 + (x*arr[i]);
        }
    }
    free(arr);
    temp = l2;
    int* arr2 = (int*)malloc(q*sizeof(int));
    for(i = 0;i<q;i++)
    {
        arr2[i] = temp->val;
        temp = temp->next;
    }
    int sum2 = 0;
    x = 1;
    for(i = q-1;i>=0;i--)
    {
        if(i == q-1)
        {
            sum2 = sum2 + arr2[i];
        }
        else
        {
            x = x*10;
            sum2 = sum2 + (x*arr2[i]);
        }
    }

    int sum = sum1 + sum2;
    int count = (sum == 0)?1:(log10(sum)+1);

    struct ListNode* l3 = NULL;
    l3->next = NULL;
    for(i = 0;i<count;i++)
    {
        struct ListNode* temp = (struct ListNode*)malloc(1*sizeof(struct ListNode));
        temp->next = NULL;
        if(l3 == NULL)
        {
            l3 = temp;
        }
        else
        {
            struct ListNode* p = l3;
            while(p->next!=NULL)
            {
                p = p->next;
            }
            p->next = temp;
        }
    }
    temp = l3;
    int r;
    for(i = 0;i<count;i++)
    {
        r = sum%10;
        temp->val = r;
        sum = sum / 10;
        temp = temp->next;
    }
    return l3;
}   

int main()
{
    return 0;
}
