#include<stdio.h>
#include<stdlib.h>

int SearchInsertPosition(int *arr,int size,int t)
{
    int low,mid,high;
    low = 0;
    high = size-1;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(t == arr[mid])
        {
            return mid;
        }
        else if(t<arr[mid])
        {
            high = mid -1;
        }
        else
            {
                low = mid+1;
            }
    }
    return low;
}

int main()
{
    int i,size,ans,t;
    printf("How Many Elements Are There In Ur Sorted Array:\n");
    scanf("%d",&size);
    int* arr = (int*)malloc(size*(sizeof(int)));
    for(i = 0;i<size;i++)
    {
        printf("Enter element at index %d: \n",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter The Element: \n");
    scanf("%d",&t);
    ans = SearchInsertPosition(arr,size,t);
    printf("Answer: %d\n",ans);

    return 0;
}