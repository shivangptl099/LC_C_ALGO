#include<stdio.h>

int isPerfectSquare(int num){
    double i;
    double temp;
    i = 0;
    temp = 1;
    while(temp<num)
    {
        temp = i*i;
        i++;
    }
    if(temp == num)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    printf("Please Enter The Number:\n");
    scanf("%d",&n);
    int x = isPerfectSquare(n);
    if(x == 1)
    {
        printf("Yes, %d Is A valid Perfect Square.\n",n);
    }
    else
    {
        printf("No, %d Is Not A valid Perfect Square.\n",n);
    }
    return 0;
}