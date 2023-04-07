#include<stdio.h>

int isUgly(int n){
    if(n<=0)
    {
        return 0;
    }

    while(n>1)
    {
        int flag = 0;
        if(n%2 == 0)
        {
            flag = 1;
            n = n/2;
        }

        if(n%3 == 0)
        {
            flag = 1;
            n = n/3;
        }

        if(n%5 == 0)
        {
            flag = 1;
            n = n/5;
        }

        if(flag == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n,ans;
    printf("Enter The Number: \n");
    scanf("%d",&n);
    ans = isUgly(n);
    if(ans == 1)
    {
        printf("The Entered Number Is Ugly Number.\n");
    }
    else
    {
        printf("The Entered Number Is Not Ugly Number.\n");
    }
    return 0;
}