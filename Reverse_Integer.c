#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int top;
    int size;
    int*arr;
};

void push(struct stack *st,int data)
{
    if(st->top == st->size - 1)
    {
        printf("The Stack Is Full\n");
    }
    else
    {
        st->top++;
        st->arr[st->top] = data;
    }
}

int main()
{   
    int n,temp,r,rev_n,i;
    printf("Enter The Number:\n");
    scanf("%d",&n);

    struct stack st;
    st.top = -1;
    st.size = 10;
    st.arr = (int*)calloc(1,sizeof(int));
    if(n<0)
    {
        temp = (-1)*n;
    }
    else
    {
    temp = n;
    }
    while(temp!=0)
    {
        r = temp%10;
        push(&st,r);
        temp = temp/10;
    }
    
    rev_n = 0;
    for(i=0;i<=st.top;i++)
    {
        if(i==0)
        {
            rev_n = st.arr[i];
        }
        else
        {
            rev_n = (rev_n *10) + st.arr[i];
        }
    }
    if(n<0)
    {
        printf("%d\n",((-1)*rev_n));
    }
    else
    {
    printf("%d\n",rev_n);
    }

    return 0;
}