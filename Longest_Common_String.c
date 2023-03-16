#include<stdio.h>
#include<string.h>

int main()
{
    char s1[20];
    char s2[20];
    char s3[20];

    printf("Enter the first string:\n");
    scanf("%s",s1);
    printf("Enter the second string:\n");
    scanf("%s",s2);
    printf("Enter the third string:\n");
    scanf("%s",s3);

    char p[10] = {0};
    char q[10] = {0};
    int x;
    if(strlen(s1) == strlen(s2))
    {
        if(strlen(s1) == strlen(s3))
        {
            x = strlen(s1);
        }
        else if(strlen(s1)<strlen(s3))
        {
            x = strlen(s1);
        }
        else
        {
            x = strlen(s3); 
        }
    }
    else if(strlen(s2) == strlen(s3))
    {
        if(strlen(s2)<strlen(s1))
        {
            x = strlen(s2);
        }
        else
        {
            x = strlen(s1); 
        }
    }
    else if(strlen(s1) == strlen(s3))
    {
        if(strlen(s1)<strlen(s2))
        {
            x = strlen(s1);
        }
        else
        {
            x = strlen(s2); 
        }
    }
    else if(strlen(s1) < strlen(s2))
    {
        if(strlen(s1)<strlen(s3))
        {
            x = strlen(s1);
        }
        else
        {
            x = strlen(s3);
        }
    }
    else if(strlen(s2) < strlen(s3))
    {
        x = strlen(s2);
    }
    else
    {
        x = strlen(s3);
    }
    
    int i;
    int j = 0;
    int k = 0;
    int z = 0;
    for(i = 0 ; i < x ; i++)
    {
        if(s1[i] == s2[i] && s1[i] == s3[i])
        {
            p[j] = s1[i];
            j++;
        }
        else
        {
            for(k = 0;k<strlen(p);k++)
            {
                q[k] = p[k];
                z++;
            }
            j = 0;
        }
    }
    printf("The Longest Common String Is:'");
    for(i=0;i<z;i++)
    {   
        printf("%c",q[i]);
    }
    printf("'.");
    return 0;
}