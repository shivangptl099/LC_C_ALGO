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

int IsSameTree(struct node* root1,struct node* root2)
{
    struct node*p = root1;
    struct node*q = root2;

    if(p == NULL && q == NULL)
    {
        return 1;
    }
    else if(p!=NULL && q!=NULL)
    {
        if(p->data == q->data 
           && IsSameTree(p->left,q->left)
           && IsSameTree(p->right,q->right))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}

int main()
{   
    struct node* r = CreateNode(1);
    struct node* r1 = CreateNode(2);
    struct node* r2 = CreateNode(1);

    r->left = r1;
    r->right = r2;
    
    struct node* s = CreateNode(1);
    struct node* s1 = CreateNode(2);
    struct node* s2 = CreateNode(1);

    s->left = s1;
    s->right = s2;

    int x = IsSameTree(r,s);
    printf("%d\n",x);
    return 0;
}