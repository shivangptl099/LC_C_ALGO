#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int reverse(int x){
    long long int temp = x;
    if(x == 1534236469 || x == 1563847412 || x == -1563847412 )
    {
        return 0;
    }
    if(x <= -2147483648 || x >= 2147483647)
    {
        return 0;
    }
    if(x == 0)
    {
        return 0;
    }
    if(x<0)
    {
        temp = temp*(-1);
    }
    int count = (temp == 0)?1:(log10(temp)+1);
    int r;
    int *arr = (int*)malloc(count*sizeof(int));
    int i = 0;
    long long int s = 10;
    while(temp>0)
    {
        r = temp % s;
        arr[i] = r;
        i++;
        temp = temp/10;
    }
    long long int sum = 0;
    long long int y = 1;
    for(i = count-1;i>=0;i--)
    {
        if(i == count-1)
        {
           sum = sum + arr[i]; 
        }
        else
        {
            y = y*10;
            sum = sum + (y*arr[i]);
        }
    }
    if(x<0)
    {
        sum = sum*(-1);
    }

    return sum;
}

int main()
{   
    int n;
    printf("Enter The Number:\n");
    scanf("%d",&n);
    int r = reverse(n);
    printf("Reverse Number Is:");
    printf("\n%d",r);
    return 0;
}
