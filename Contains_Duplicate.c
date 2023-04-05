#include<stdio.h>
#include<stdlib.h>

int containsDuplicate(int* nums, int numsSize){
    int i,j,x;
    x = 0;
    for(i = 0;i<numsSize-1;i++)
    {
        for(j = i+1;j<numsSize;j++)
        {
            if(nums[i] == nums[j])
            {
                x++;
            }
            if(x>=1)
            {
                x = 1;
                break;
            }
        }
        if(x == 1)
        {
            break;
        }
    }
    return x;
}

int main()
{
    int i,n,s;
    printf("How Many Elements Are There In Your Array: \n");
    scanf("%d",&n);
    int *arr = (int*)malloc(n*sizeof(int));
    for(i = 0;i<n;i++)
    {
        printf("Enter Element %d: \n",i+1);
        scanf("%d",&arr[i]);
    }
    s = containsDuplicate(arr,n);
    if(s == 1)
    {
        printf("This Array Contains Duplicate.\n");
    }
    else
    {
        printf("This Array Does Not Contain Duplicate.\n");
    }
    return 0;
}