#include<stdio.h>

int isPowerOfThree(int n){
    if(n == 1)
    {
        return 1;
    }
    if(n%3 != 0)
    {
        return 0;
    }
    double temp;
    temp = 1;
    while(temp<n)
    {
        temp = temp*3;
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
    printf("Enter The Number: \n");
    scanf("%d",&n);
    int x = isPowerOfThree(n);
    if(x == 1)
    {
        printf("Yes, %d is A Power Of Three.\n",n);
    }
    else
    {
        printf("No, %d is Not A Power Of Three.\n",n);
    }
    return 0;
}