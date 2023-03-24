#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int CarryGen(int a,int b)
{
    int c = 0;
    if(a == 1 && b == 1)
    {
        c = 1;
        return c;
    }
    else 
    return c;
}

int main()
{
    int b1,b2;
    printf("Enter First Binary Number:\n");
    scanf("%d",&b1);
    printf("Enter Second Binary Number:\n");
    scanf("%d",&b2);
    int n1 = b1;
    int r = 0;
    int *arr1 = (int*)calloc(1,sizeof(int));
    int count1 = (b1 == 0)?1:(log10(b1) + 1);
    int i;
    i = count1-1;
    while(n1>0)
    {
        r = n1 % 10;
        arr1[i] = r;
        i--;
        n1 = n1/10;
    }
    int n2 = b2;
    r = 0;
    int *arr2 = (int*)calloc(1,sizeof(int));
    int count2 = (b2 == 0)?1:(log10(b2) + 1);
    i = count2 - 1;
    while(n2>0)
    {
        r = n2 % 10;
        arr2[i] = r;
        i--;
        n2 = n2/10;
    }
    for(i = 0;i<count1;i++)
    {
    printf("%d\t",arr1[i]);
    }
    printf("\n");
    for(i = 0;i<count2;i++)
    {
    printf("%d\t",arr2[i]);
    }
    return 0;
}