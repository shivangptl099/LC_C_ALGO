int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = numsSize;
    int i,j,x,y,count;
    count = 0;
    for(i= 0;i<numsSize-1;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[j] + nums[i] == target)
            {
                x = i;
                y = j;
                count++;
                break;
            }
        }
    }
    *returnSize = 2;
    int* ans = (int*)malloc(2*sizeof(int));
    if(count>0)
    {
    ans[0] = x;
    ans[1] = y;
    }
    return ans;
}
