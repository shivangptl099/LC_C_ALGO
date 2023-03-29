#include<stdio.h>
#include<malloc.h>
#include<string.h>

char * addBinary(char * a, char * b){
    int len_a = strlen(a);
    int len_b = strlen(b);
    
    int i = len_a - 1;
    int j = len_b - 1;

    int z = (len_a>len_b)?len_a:len_b;
    char* arr = (char*)malloc((z+1)*sizeof(char));

    int k = 0;
    int sum,carry;
    sum = 0;
    carry = 0;
    while(i>=0 || j>=0 || carry!=0)
    {   
        int x = 0;
        if( i>=0 && a[i] == '1')
        {
            x = 1;
        }
        int y = 0;
        if(j>=0 && b[j] == '1')
        {
            y = 1;
        }
        sum = (x+y+carry)%2;
        carry = (x+y+carry)/2;

        if(sum == 1)
        {
            arr[k] = '1'; 
        }
        else
        {
            arr[k] = '0';
        }
        i--;
        j--;
        k++;
    }
    char* arr_rev = (char*)malloc(k*sizeof(char));
    j = 0;
    for(i = k-1;i>=0;i--)
    {
        arr_rev[j] = arr[i];
        j++;
    }
    return arr_rev;
}

int main()
{   
    char*a = (char*)malloc(sizeof(char));
    char*b = (char*)malloc(sizeof(char));
    printf("Enter First Binary Number:\n");
    scanf("%s",a);
    printf("Enter Second Binary Number:\n");
    scanf("%s",b);
    if(strlen(a) == 1 && strlen(b) == 1 && a[0] == '1' && b[0] == '1')
    {
        printf("10");
        return 0;
    }
    char* arr = addBinary(a,b);
    printf("%s",arr);
    return 0;
}
