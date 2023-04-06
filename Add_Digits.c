#include<stdio.h>
#include<math.h>

int addDigits(int num){
    int i,count,count1,temp,r,sum;
    temp = num;
    while(temp>0)
    {
        count = (temp == 0)?1:(log10(temp)+1);
        sum = 0;
        for(i = 0;i<count;i++)
        {
        r = temp%10;
        sum = sum + r;
        temp = temp/10;
        }
        count1 = (sum == 0)?1:(log10(sum)+1);
        if(count1 == 1)
        {
            break;
        }
        else
        {
            temp = sum;
        }
    }
    return sum;
}

int main()
{
    return 0;
}