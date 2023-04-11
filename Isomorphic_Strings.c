#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int isIsomorphic(char * s, char * t){
    if(strlen(s) != strlen(t))
    {
        return 0;
    }
    
    char* a = (char*)malloc(strlen(s)*sizeof(char));
    int i,j,k;
    j = 0;
    for(i = 0;i<strlen(s);i++)
    {
        if(i == 0)
        {
            a[j] = t[i];
            j++;
        }
        else
        {
            k = 0;
            while(s[i]!=s[k])
            {
                k++;
            }
            a[j] = t[k];
            j++;
        }
    }
    i = 0;
    while(i<strlen(s))
    {
        if(t[i] != a[i])
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main()
{
    char* s = (char*)malloc(sizeof(char));
    printf("Enter The First String: \n");
    gets(s);
    char* t = (char*)malloc(sizeof(char));
    printf("Enter The Second String: \n");
    gets(t);

    int x = isIsomorphic(s,t);
    if(x == 1)
    {
        printf("These Strings Are Isomorphic.\n");
    }
    else
    {
        printf("These Strings Are Not Isomorphic.\n");
    }

    return 0;
}