struct ListNode{
    int val;
    struct ListNode* next;
};

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    int s = 0;
    struct ListNode* p = head;
    while(p!=NULL)
    {
        p = p->next;
        s++;
    }
    int x = (s-n);
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