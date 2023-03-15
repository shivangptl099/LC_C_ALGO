#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack 
{
    int size;
    int top;
    char *arr;
};

void push(struct stack *st,char data)
{
    st->top ++;
    st->arr[st->top] = data;
}

char pop(struct stack *st)
{   char temp;
    temp = st->arr[st->top];
    st->top--;
    return temp;
}

int main()
{
    struct stack st;
    st.top = -1;
    st.size = 20;
    st.arr = (char*)malloc(st.size*sizeof(char));

    char s[20];
    printf("Enter String:\n");
    scanf("%s",s);
    int i;
    char t;
    for(i = 0;i<strlen(s);i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            push(&st,s[i]);
        }
        else if(s[i] == ')')
        {
            t = pop(&st);
            if(t != '(')
            {
                printf("The Parantheses Is Not Matched\n");
                break;
            }
        }
        else if(s[i] == '}')
        {
            t = pop(&st);
            if(t != '{')
            {
                printf("The Parantheses Is Not Matched\n");
                break;
            }
        }
        else if(s[i] == ']')
        {
            t = pop(&st);
            if(t != '[')
            {
                printf("The Parantheses Is Not Matched\n");
                break;
            }
        }
    }

    if(st.top == -1 && i == strlen(s))
    {
        printf("The Parantheses Is Matched\n");
    }
    printf("Thank You\n");
    return 0;
}