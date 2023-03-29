int singleNumber(int* nums, int numsSize){
    int i,j,flag;
    for(i = 0;i<numsSize-1;i++)
    {
        for(int j = i+1;j<numsSize;j++)
        {   flag = 1;
            if(nums[i] == nums[j])
            {
                flag++;
            }
        }
        if(flag != 2)
        {
            break;
        }
    }
    int z = nums[i];
    i = numsSize-1;
    flag = 1;
    for(j = 0;j<numsSize-1;j++)
    {  
        if(nums[i] == nums[j])
        {
            flag++;
        }
    }
    if(flag!=2)
    {
        return nums[numsSize-1];
    }

    return z;
}