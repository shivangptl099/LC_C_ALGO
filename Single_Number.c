#include<stdio.h>
#include<malloc.h>
int SingleNumber(int* nums, int numsSize){
    int i,j,flag;
    for(i = 0;i<numsSize-1;i++)
    {
        for(int j = 0;j<numsSize;j++)
        {   flag = 1;
            if(i == j)
            {
                continue;
            }
            if(nums[i] == nums[j])
            {
                flag++;
                break;
            }
        }
        if(flag%2 != 0)
        {
            break;
        }
    }
    int z = nums[i];
    return z;
}

int main()
{   
    int i,n;
    printf("How Many Elements Are There In Your Array:\n");
    scanf("%d",&n);
    int* arr = (int*)malloc(n*sizeof(int));
    for(i = 0;i<n;i++)
    {
        printf("Enter element %d: \n",i+1);
        scanf("%d",&arr[i]);
    }
    int x = SingleNumber(arr,n);
    printf("The Element Present Only One Time Is : %d.\n",x);
    return 0;
}
