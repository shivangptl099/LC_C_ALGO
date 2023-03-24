#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char* arr = (char*)calloc(1,sizeof(char));
    printf("Enter the Sentence:\n");
    scanf("%[^\n]%*c",arr);
    int CurrLen = strlen(arr) - 1; 
    int count = 0;
    if(strlen(arr) == 0)
    {
        printf("Answer = 0");
        return 0;
    }
    int i = CurrLen;
    while(i>=0)
    {
        if(arr[i]!=' ')
        {
            break;
        }
        else
        {
            i--;
        }
    }
    char* arr1 = (char*)calloc(1,sizeof(char));
    for(i;i>=0;i--)
    {
        if(arr[i] == ' ')
        {
            break;
        }
        else
        {   
            count++;
        }
    }
    printf("%d",count);
    return 0;
}