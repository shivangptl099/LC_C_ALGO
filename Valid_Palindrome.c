#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char* s = (char*)malloc(sizeof(char));
    printf("Enter:\n");
    gets(s);
    int i,j;
    j = 0;
    char* s1 = (char*)malloc(sizeof(char));
    for(i = 0;i<strlen(s);i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            s1[j] = s[i];
            j++;
        }
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s1[j] = tolower(s[i]);
            j++;
        }
        if(s[i] >= '0' && s[i] <= '9')
        {
            s1[j] = s[i];
            j++;
        }
    }
    puts(s1);
    return 0;
}
