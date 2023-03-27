#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n,i,j,sum,x,temp;
    printf("Enter The No. Of Digits Of Your Number:\n");
    scanf("%d",&n);
    int* arr1 = (int*)calloc(1,sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("Enter Digit %d:\n",i+1);
        scanf("%d",&arr1[i]);
    }
    sum = 0;
    for(i = n-1;i>=0;i--)
    {
        if(i == n-1)
        {
            sum = sum + arr1[n-1];
        }
        else 
        {
            x = arr1[i];
            temp = 1;
            for(j = n-1;j>i;j--)
            {
                temp = 10*temp;
            }
            temp = temp*x;
            sum = sum + temp;
        }
    }
    sum  = sum + 1;

    int r;
    int* arr2 = (int*)calloc(1,sizeof(int));
    int count = (sum == 0)?1:(log10(sum)+1);
    temp = sum;
    for(i = count-1 ; i>=0;i--)
    {
        r = temp % 10;
        arr2[i] = r;
        temp = temp/10;
    }

    printf("The Answer Is ...\n");
    // printf("[   ");
    for(i = 0;i<count;i++)
    {
    printf("%d\t",arr2[i]);
    }
    return 0;
}
