#include<stdio.h>
#include<stdlib.h>

int containsDuplicate(int* nums, int numsSize){
    int i,j;
    for(i = 0;i<numsSize-1;i++)
    {
        for(j = i+1;j<numsSize;j++)
        {
            if(nums[j]<nums[i])
            {
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
    }

    for(i = 0;i<numsSize-1;i++)
    {
        if(nums[i] == nums[i+1])
        {
            return 1;
        }
    }
    return 0;
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
