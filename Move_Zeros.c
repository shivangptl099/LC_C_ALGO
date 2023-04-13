#include<stdio.h>
#include<malloc.h>

int* moveZeroes(int* nums, int numsSize){
    int i,j,x,y;
    x = 0;
    for(i = 0;i<numsSize;i++)
    {
        if(nums[i] == 0)
        {
            x++;
        }
    }
    if(x == 0)
    {
        return nums;
    }
    y = 0;
    i = numsSize-1;
    while(y<=x)
    {
        if(nums[i] != 0)
        {
            break;
        }
        else
        {
            y++;
            if(y == x)
            {
                return nums;
            }
        }
        i--;
    }

    y = 0;
    for(i = 0;i<numsSize;i++)
    {
        if(nums[0] == 0)
        {   
            y++;
            for(j = 0;j<numsSize-1;j++)
            {
                nums[j] = nums[j+1];
            }
            nums[j] = 0;
        }
        else
        {
            y++;
            for(j = i;j<numsSize-1;j++)
            {
                nums[j] = nums[j+1];
            }
            nums[j] = 0;
        }

        if(y == x)
        {
            break;
        }
    }
    return nums;
}

int main()
{
    int n,i;
    printf("How Many Elements Are there In Your Array:\n");
    scanf("%d",&n);
    int* arr = (int*)malloc(n*sizeof(int));
    for(i = 0;i<n;i++)
    {
        printf("Enter Element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int* arr1 = (int*)malloc(n*sizeof(int));
    arr1 = moveZeroes(arr,n);
    for(i = 0;i<n;i++)
    {
        printf("%d\t",arr1[i]);
    }
    return 0;
}