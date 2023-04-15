int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize){
    int* arr = (int*)calloc(10000,sizeof(int));
    int i,j,x;
    int z = 0;
    j = 1;
    while(j<=numsSize){
        x = 0;
    for(i = 0;i<numsSize;i++)
    {   
        if(nums[j] == nums[i])
        {
            x = 1;
            break;
        }
    }
    if(x != 1)
    {
        arr[z] = nums[j];
        z++;
    }
    j++;
    }
    return arr;
}