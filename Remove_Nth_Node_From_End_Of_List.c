#include<stdio.h>
#include<stdlib.h>

struct ListNode
{
    struct ListNode* next;
    int val;
};

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    int s = 0;
    struct ListNode* p = head;
    while(p!=NULL)
    {
        p = p->next;
        s++;
    }
    int x = (s-n-1);
    int i = 0;
    p = head;
    while(i<x)
    {
        p = p->next;
        i++;
    }
    struct ListNode* q = p->next;
    p->next = q->next;
    return head;
}

int main()
{
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* a = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* b = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* p = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* q = (struct ListNode*)malloc(sizeof(struct ListNode));

    int n = 2;
    head->val = 1;
    a->val = 2;
    b->val = 3;
    p->val = 4;
    q->val = 5;

    head->next = a;
    a->next = b;
    b->next = p;
    p->next = q;
    q->next = NULL; 

    struct ListNode* temp = head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->val);
        temp = temp->next;
    }
    printf("\n");
    temp = removeNthFromEnd(head,n);
    while(temp!=NULL)
    {
        printf("%d\t",temp->val);
        temp = temp->next;
    }
    return 0;
}
