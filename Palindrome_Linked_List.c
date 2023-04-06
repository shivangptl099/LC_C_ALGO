#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node* next;
    int data;
};

int isPalindrome(struct node* head){
    struct node* temp = head;
    int i = 0;
    while(temp!=NULL)
    {
        i++;
        temp = temp->next;
    }
    int z = i;
    int *arr = (int*)malloc(z*sizeof(int));
    temp = head;
    i = 0;
    while(temp!=NULL)
    {
        arr[i] = temp->data;
        i++;
        temp = temp->next;
    }
    int j = z-1;
    for(i = 0;i<(z/2);i++)
    {
        if(arr[i] != arr[j])
        {
            return 0;
        }
        j--;
    }
    return ;
}

int main()
{
    return 0;
}