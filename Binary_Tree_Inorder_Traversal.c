#include<stdio.h>
#include<malloc.h>

struct node
{
    struct node* left;
    struct node* right;
    int data;
};

struct node* CreateNode(int data)
{
    struct node* p;
    p = (struct node*)malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void InorderTraversal(struct node* r)
{   
    if(r!=NULL)
    {
        InorderTraversal(r->left);
        printf("%d\t",r->data);
        InorderTraversal(r->right);
    }
}

int main()
{   
    struct node* r = CreateNode(1);
    struct node* r1 = CreateNode(2);
    struct node* r2 = CreateNode(3);

    r->right = r1;
    r1->left = r2;

    InorderTraversal(r);
    return 0;
}