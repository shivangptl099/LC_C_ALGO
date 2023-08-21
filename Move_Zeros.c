void moveZeroes(int* nums, int numsSize){
    int i,j,count,count1;
    count = -1 ;
    for(i = 0;i<numsSize;i++)
    {
        if(nums[i] != 0)
        {
            count++;
            nums[count] = nums[i];
        }
    }
    count1 = numsSize - (count + 1);
    j = numsSize - 1;
    for(i = 0;i<count1;i++)
    {
        nums[j] = 0;
        j--;
    }
    return nums;
}
