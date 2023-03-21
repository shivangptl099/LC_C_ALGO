#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,temp;
    float n;
    printf("Please Enter The Number:\n");
    scanf("%f",&n);

    if(n==0 || n<1)
    {
        printf("Answer = 0.\n");
    }
    else if(n == 1)
    {
        printf("Answer = 1.\n");
    }
    else
    {
        i = 0 ;
        while(i<n)
        {
            temp = i*i;
            if(temp > n)
            {
                i--;
                break;
            }
            i++;
        }
    }

    printf("Answer = %d.\n",i);

    return 0;
}