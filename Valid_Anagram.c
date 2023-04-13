#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int isAnagram(char * s, char * t){
    if(strlen(s)!=strlen(t))
    {
        return 0;
    }
    int i,j,x;
    x = 0;
    for(i = 0;i<strlen(s);i++)
    {
        for(j = 0;j<strlen(t);j++)
        {
            if(s[i] == t[j])
            {
                t[j] = '_';
                x++;
                break;
            }
        }
    }
    if(x!=strlen(s))
    {
        return 0;
    }
    return 1;
}

int main()
{
    char* s = (char*)malloc(sizeof(char));
    printf("Enter The First String:\n");
    gets(s);
    char* t = (char*)malloc(sizeof(char));
    printf("Enter The Second String:\n");
    gets(t);
    int x = isAnagram(s,t);
    if(x == 1)
    {
        printf("Yes, The Two Strings Are Valid Anagram.\n");
    }
    else
    {
        printf("No, The Two Strings Are Not Valid Anagram.\n");
    }
    return 0;
}
