int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    int low,mid,high,i,j;
    int* arr = (int*)malloc(2*sizeof(int));
    i = 0;
    low = 0;
    high = numsSize;
    while(i<2)
    {
    while(low<=high)
    {
        mid  = (low+high)/2;
        if(target == nums[mid])
        {
            arr[i] = mid;
            i++;
            break;
        }
        else if(target<nums[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid + 1;
        }
    }
    }
    return arr;
}