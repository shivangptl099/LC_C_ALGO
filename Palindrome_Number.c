#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

void push(struct stack *st,int data)
{
    if(st->top == st->size -1 )
    {
      printf("The Stack Is Full.\n");
    }
    else
    {
        st->top++;
        st->arr[st->top] = data;
    }
}

void display(struct stack *st)
{
    if(st->top == -1)
    {
        printf("The Stack Is Empty.\n");
    }
    else
    {
        for(int i = 0;i<=st->top;i++)
        {
            printf("%d\t",st->arr[i]);
        }
    }
}

int main()
{   
    int n,r,count;
    struct stack st;
    st.top = -1;
    st.size = 20;
    st.arr = (int*)calloc(1,sizeof(int));

    int n1,n2;
    printf("Please Enter The Number:\n");
    scanf("%d",&n);
    int temp;
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
        r = temp % 10;
        push(&st,r);
        temp=temp/10;
    }
    int sum = 0;
    for(int i=0;i<=st.top;i++)
    {
        if(i==0)
        {
            sum = sum + st.arr[i]; 
        }
        else
        {
            sum = sum*10 + st.arr[i];
        }
    }
    if(n<0)
    {
        sum = (-1)*sum;
    }
    if(sum != n || n<0)
    {
        printf("The Entered Number Is Not A Palindrome Number.\n");
    }
    else
    {
        printf("The Entered Number Is A Palindrome Number.\n");
    }


    return 0;
}