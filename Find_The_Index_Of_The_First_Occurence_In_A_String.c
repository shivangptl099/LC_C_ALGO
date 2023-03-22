#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char* arrb;
    char* arrs;

    arrb = (char*)calloc(1,sizeof(char));
    arrs = (char*)calloc(1,sizeof(char));

    printf("Enter Big String: \n");
    scanf("%s",arrb);
    printf("Enter Small String: \n");
    scanf("%s",arrs);
    
    int i,j,x,temp;
    temp = 0;
    for(i = 0; i < (strlen(arrb) - strlen(arrs) + 1); i++)
    {
        if(arrb[i] == arrs[0])
        {   
            x = i;
            for(j = 0;j<strlen(arrs);j++)
            {   
                if(temp == strlen(arrs))
                {
                    break;
                }
                if(arrs[j] == arrb[i])
                {
                    temp++;
                    i++;
                }
            }
            if(temp == strlen(arrs))
                {
                    break;
                }
        }
    }

    if(temp == strlen(arrs))
    {
        printf("%d",x);
    }
    else
    {
        printf("-1");
    }
    return 0;
}
