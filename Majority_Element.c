#include<stdio.h>
#include<malloc.h>

int majorityElement(int* nums, int numsSize){
    int i;
    int major = nums[0];
    int count = 1;
    for(i = 1;i<numsSize;i++)
    {   
        if(nums[i]==major)
        {
            count++;
        }
        else
        {
            count--;
        }

        if(count == 0)
        {
            major =  nums[i];
            count = 1;
        }
    }
    return major;
}

int main()
{
    int n;
    printf("How Many Elements Are There In Your Array: \n");
    scanf("%d",&n);
    int *arr = (int*)malloc(n*sizeof(int));
    for(int i = 0;i<n;i++)
    {
        printf("Enter Element %d: \n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The Majority Element Is %d.",majorityElement(arr,n));
    return 0;
}