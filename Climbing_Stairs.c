#include<stdio.h>

int climbStairs(int n){
    int i,c,a,b;
    a = 1;
    b = 2;
    if(n == 1)
    {
        c = 1;
        return c;
    }
    else if(n == 2)
    {
        c = 2;
        return c;
    }
    for(i = 3;i<=n;i++)
    {
       c = a+b;
       a = b;
       b = c; 
    }

    return c;
}
int main()
{
    int n;
    printf("Enter n:\n");
    scanf("%d",&n);
    printf("%d",climbStairs(n));
    return 0;
}