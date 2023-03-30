#include<stdio.h>
#include<malloc.h>

int maxProfit(int* prices, int pricesSize){
int i = 0;
int ret = 0;
int min = prices[i];
for(i = 0;i<pricesSize;i++)
{
    if(prices[i]<min)
    {
        min = prices[i];
    }
    if(prices[i] - min >ret)
    {
        ret = prices[i] - min;
    }
}
return ret;
}

int main()
{
    int n;
    int*arr = (int*)malloc(n*sizeof(int));

    printf("How Many Days' Stock Data Do You Have?:\n");
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        printf("Enter The Stock Price At Day %d: \n",i+1);
        scanf("%d",&arr[i]);
    }
    int x = maxProfit(arr,n);
    printf("The Max Profit You Can Make Is: %d\n",x);

    return 0;
}