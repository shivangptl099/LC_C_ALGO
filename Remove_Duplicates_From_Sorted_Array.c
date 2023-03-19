#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,n;
    int x=0;
    int y = 0;
    int *arr = (int*)calloc(1,sizeof(int));
    printf("Enter The No. Of Elements In Array\n");
    scanf("%d",&n);
    for(i = 0;i<n;i++)
    {
        printf("Enter Element %d:\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(i = 0;i<n-1;i++)
    {
        for(j = i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                arr[j] = 100;
            }
        }
    }

    printf("The New Array Will Be Like This...\n");
    printf("[\t");
    for(i = 0;i<n;i++)
    {
        if(arr[i]==100)
        {
            x++;
            continue;
        }
        else
        {
            printf("%d\t",arr[i]);
        }
    }

    for(i = 0;i<x;i++)
    {
        printf("_\t");
    }
    printf("]");
    printf("\n");
    printf("k = %d\n",n-x);
    return 0;
}