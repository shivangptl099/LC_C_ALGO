#include<stdio.h>
#include<math.h>

int isHappy(int n){
    int temp = n;
    int i,r,x,y,sum,count;
    x = 0;
    if(n == 1)
    {
        return 1;
    }
    while(temp!=1  &&  x<20)
    {
        count = (temp == 0)?1:(log10(temp)+1);
        sum = 0;
        for(i = 0;i<count;i++)
        {
            r = temp%10;
            sum = sum + r*r;
            temp = temp/10;
        }
        if(sum == 1)
        {
            return 1;
        }
        else
        {
            temp = sum;
            x++;
        }
    }
    return 0;
}

int main()
{
    int n;
    printf("Please Enter The Number: \n");
    scanf("%d",&n);
    printf("%d",isHappy(n));
    return 0;
}
