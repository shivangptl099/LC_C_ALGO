#include<stdio.h>

int isPowerOfTwo(int n){
    if(n == 1)
    {
        return 1;
    }
    if(n%2 != 0)
    {
        return 0;
    }
    long int temp;
    temp = 1;
    while(temp<n)
    {
        temp = temp*2;
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
    int x = isPowerOfTwo(n);
    if(x == 1)
    {
        printf("Yes, %d is A Power Of Two.\n",n);
    }
    else
    {
        printf("No, %d is Not A Power Of Two.\n",n);
    }
    return 0;
}