#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct queue{
    int size;
    int f;
    int r;
    char *arr;
};

void IsFull(struct queue *q)
{
    if(q->r == q->size -1)
    {
        printf("The Queue Is Full.\n");
    }
}

void IsEmpty(struct queue *q)
{
    if(q->f == -1)
    {
        printf("The Queue Is Empty.\n");
    }
}

void enqueue(struct queue *q,char s)
{   
    if(q->r == q->size -1)
    {
        printf("Queue Is Full for element %c\n",s);
    }
    else if(q->f == -1)
    {
        q->f ++;
        q->r ++;
        q->arr[q->r] = s; 
    }
    else
    {
        q->r ++;
        q->arr[q->r] = s;
    }
}

void dequeue(struct queue *q)
{
    if(q->f == -1)
    {
        printf("Queue Is Empty\n");
    }
    else if(q->r == 0)
    {
        q->f = -1;
        char s = q->arr[q->f];
        q->f++;
    }
    else
    {
        char s = q->arr[q->f];
        q->f ++;
    }
}

void display(struct queue *q)
{
    if(q->f == -1)
    {
        printf("Queue Is Empty\n");
    }
    for(int i = q->f; i<=q->r;i++)
    {
        printf("%c\t",q->arr[i]);
    }
}


int main()
{
    int i,j,k,temp,count,flag;
    char s[20];
    printf("Enter String:\n");
    scanf("%s",s);
    struct queue q1;
    q1.f = -1;
    q1.r = -1;
    q1.size = 20;
    q1.arr = (char*)calloc(1,sizeof(char));
    temp =0;
    count =0;
    for(i=0;i<strlen(s);i++)
    {   flag = 1;
        if(q1.f == -1)
        {
            enqueue(&q1,s[i]);
            temp = 1;
        }
        else
        {
            for(j=0;j<temp;j++)
            {
                if(s[i] == q1.arr[j])
                {
                    flag = 0;   
                    break; 
                }
                else
                {
                    flag = 1;
                }    
            }
            if(flag == 0)
            {
                for(k=0;k<temp;k++)
                {
                dequeue(&q1);
                }
                if(count<temp)
                {
                count = temp;
                }
                else
                {
                    temp = 1;
                }
                enqueue(&q1,s[i+1]);
            }
            else
            {
                enqueue(&q1,s[i]);
                temp++;
            }
        }
    }
    printf("The Count Is %d.\n",count);
    return 0;
}