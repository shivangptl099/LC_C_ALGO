#include<stdio.h>
#include<string.h>
#include<malloc.h>

void reverseString(char* s, int sSize){
    char* rev = (char*)malloc((sSize)*sizeof(char));
    int i,j;
    j = 0;
    for(i = sSize-1;i>=0;i--)
    {
        rev[j] = s[i];
        j++;
    }
    for(i = 0;i<sSize;i++)
    {
        s[i] = rev[i];
    }
}

int main()
{
    char*s = (char*)malloc(sizeof(char));
    printf("Please Enter The String:\n");
    gets(s);
    reverseString(s,strlen(s));
    printf("%s",s);
    return 0;
}