#include<stdio.h>
#include<stdlib.h>

char * convertToTitle(int columnNumber){
    int i,j,n;
    n = columnNumber; 
    char *arr = (char*)calloc(1,sizeof(char));
    i = 0;
    while(n>0)
    {
        char c = 'A' + ((n-1) % 26);
        arr[i] = c;
        n = (n-1)/26;
        i++;
    }
    char *arr1 = (char*)calloc(1,sizeof(char));
    n = i-1;
    for(j = 0;j<i;j++)
    {
        arr1[j] = arr[n];
        n--; 
    }
    return arr1;
}

int main()
{
    int n;
    printf("Enter The Column Number: \n");
    scanf("%d",&n);
    printf("%s",convertToTitle(n));
    return 0;
}