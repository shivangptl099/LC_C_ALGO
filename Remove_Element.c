#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,val,j,temp;
    int arr[10];
    printf("Enter The Number Of Values In Array:\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
    printf("Enter Element %d:\n",i+1);
    scanf("%d",&arr[i]);
    }
    printf("Enter The Value To Be Deleted:\n");
    scanf("%d",&val);
    temp =0;
    for(i=0;i<n;i++)
    {
        if(arr[i] == val)
        {
            arr[i] = 105;
            temp++;
        }
    }

    j = n - temp;

    printf("k = %d\n",j);
    printf("[");
    for(i = 0;i<n;i++)
    {   
        if(arr[i]<100)
        printf("%d,",arr[i]);
    }
    printf("]");

    return 0;
}