#include<stdio.h>
#include<string.h>

int main()
{
    char arr1[100];
    char arr2[100];
    printf("enter The First String:\n");
    scanf("%s",arr1);
    printf("enter The Second String:\n");
    scanf("%s",arr2);
    int i,j;
    int temp = 0;
    int flag = 0;
    for(i = 0;i<strlen(arr2);i++)
    {
        for(j=0;j<strlen(arr1);j++)
        {
            if(arr2[i] != arr1[j] )
            {
                continue;
            }
            else
            {   
                flag = i;
                temp++;
                i++;
            }
        }
        if(temp == strlen(arr2))
        {
            break;
        }
    }

    if(temp != strlen(arr2))
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n",(strlen(arr2)-i));
    }
    return 0;
}