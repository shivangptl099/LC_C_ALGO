#include<stdio.h>

int isPowerOfFour(int n){
    if(n == 1)
    {
    return 1;
    }
    if(n % 4 != 0)
    {
        return 0;
    }
    double temp = 1;
    while(temp<n)
    {
        temp = temp*4;
    }
    if(temp != n)
    {
        return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter The Number:\n");
    scanf("%d",&n);
    int x = isPowerOfFour(n);
    if(x == 1)
    {
        printf("Yes, The %d Is Power Of Four.\n",n);
    }
    else
    {
        printf("No, The %d Is Not The Power Of Four.\n",n);
    }
    return 0;
}
