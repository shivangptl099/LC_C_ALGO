#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int b1,b2;
    printf("Enter First Binary Number:\n");
    scanf("%d",&b1);
    printf("Enter Second Binary Number:\n");
    scanf("%d",&b2);
    int n1 = b1;
    int n2 = b2;
    int r = 0;
    int *arr1 = (int*)calloc(1,sizeof(int));
    int *arr2 = (int*)calloc(1,sizeof(int));
    int count1 = (b1 == 0)?1:(log10(b1)+1);
    int count2 = (b2 == 0)?1:(log10(b2)+1);
    int i;
    i = count1-1;
    while(n1>0)
    {
        r = n1 % 10;
        arr1[i] = r;
        i--;
        n1 = n1/10;
    }
    i = count2-1;
    r = 0;
    while(n2>0)
    {
        r = n2 % 10;
        arr2[i] = r;
        i--;
        n2 = n2/10;
    }
    int ans;
    int *arr3 = (int*)calloc(1,sizeof(int));
    int z = 0;
    int carry = 0;
    i =0;
    while(i<count1 || i<count2 || carry!=0)
    {
        int x =0;
        if(i<count1 && arr1[count1-1-i] == 1)
        {
            x = 1;
        }
        int y =0;
        if(i<count2 && arr1[count2-1-i] == 1)
        {
            y = 1;
        }

        ans = (x+y+carry)%2;
        arr3[z] = ans;
        carry = (x+y+carry)/2;
        z++;
        i++;
    }

    for(i = z-1;i>=0;i--)
    {
        printf("%d",arr3[i]);
    }

    return 0;
}
