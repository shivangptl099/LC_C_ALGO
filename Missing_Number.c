#include<stdio.h>
#include<malloc.h>

int missingNumber(int* nums, int numsSize){
    int i,j,x;
    j = 0;
    while(j<=numsSize)
    {
        x = 0;
    for(i = 0;i<numsSize;i++)
    {
        if(j == nums[i])
        {
            x++;
            break;
        }
    }
    if(x == 0)
    {
        x = j;
        break;
    }
    j++;
    }
    return x;
}

int main()
{
    int n,i;
    printf("Enter The No. Of Elements In Array: \n");
    scanf("%d",&n);
    int *arr = (int*)malloc(n*sizeof(int));
    for(i = 0;i<n;i++)
    {
        printf("Enter Element %d: \n",i+1);
        scanf("%d",&arr[i]);
    }
    int ans = missingNumber(arr,n);
    printf("The Missing Number In Your Array Is: %d\n",ans);
    return 0;
}