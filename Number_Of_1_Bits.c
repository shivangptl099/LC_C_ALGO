#include<stdio.h>
#include<stdint.h>

int hammingWeight(uint32_t n) {
    int temp = n;
    int r;
    int x = 0;
    while(temp>0)
    {
        r = 0;
        r = temp % 10;
        if(r == 1)
        {
            x++;
        }
        temp = temp / 10;
    }
    return x;
}

int main()
{
    uint32_t n;
    printf("Please Enter The Number:\n");
    scanf("%d",&n);
    int x = hammingWeight(n);
    printf("Amswer: %d",x);
    return 0;
}