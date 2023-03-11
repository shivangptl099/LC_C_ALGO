#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{   
    int i,temp;
    char s[25];
    printf("Enter Roman Numeral:\n");
    scanf("%s",s);
    int sum = 0;
    temp = 0;
    i = 0;
    for(i = 0;i<strlen(s);i++)
    {   
        if(s[i] == 'M')
        {   
            if(s[i] == 'M' && s[i+1] == 'M')
            {   
                if(s[i] == 'M' && s[i+1] == 'M' && s[i+2] == 'M')
                {
                    temp = temp + 3000;
                    i++;
                    i++;
                    continue;
                }
                else
                {
                temp = temp + 2000;
                i++;
                continue;
                }
            }
            else
            {
            temp = temp + 1000;
            }
        }
        if(s[i] == 'C')
        {   
            if(s[i] == 'C' && s[i+1] == 'C')
            {
                if(s[i] == 'C' && s[i+1] == 'C' && s[i+2] == 'C')
                {
                    temp = temp + 300;
                    i++;
                    i++;
                    continue;
                }
                else
                {
                temp = temp + 200;
                i++;
                continue;
                }
            }
            else if(s[i] == 'C' && s[i+1] == 'D')
                 {
                 temp = temp + 400;
                 i++;
                 continue;
                 }
            else if(s[i] == 'C' && s[i+1] == 'M')
                {
                    temp = temp + 900;
                    i++;
                    continue;
                }
            else
            {
            temp = temp + 100;
            }
        }
        if(s[i] == 'D')
        {   
            if(s[i] == 'D' && s[i+1] == 'C')
            {
                if(s[i] == 'D' && s[i+1] == 'C' && s[i+2] == 'C')
                {
                    if(s[i] == 'D' && s[i+1] == 'C' && s[i+2] == 'C' && s[i+3] == 'C')
                    {
                    temp = temp + 800;
                    i++;
                    i++;
                    i++;
                    continue;
                    }
                    else
                    {
                    temp = temp + 700;
                    i++;
                    i++;
                    continue;
                    }
                }
                else
                {
                temp = temp + 600;
                i++;
                continue;
                }
            }
            else
            {
            temp = temp + 500;
            }
        }
        if(s[i] == 'X')
        {   
            if(s[i] == 'X' && s[i+1] == 'X')
            {   
                if(s[i] == 'X' && s[i+1] == 'X' && s[i+2] == 'X')
                {
                    temp = temp + 30;
                    i++;
                    i++;
                    continue;
                }
                else
                {
                temp = temp + 20;
                i++;
                continue;
                }
            }
            else if(s[i] == 'X' && s[i+1] == 'L')
                 {
                    temp = temp + 40;
                    i++;
                    continue;
                 }
            else if(s[i] == 'X' && s[i+1] == 'C')
                 {
                    temp = temp + 90;
                    i++;
                    continue;
                 }
            else
            {
            temp = temp + 10;
            }
        }
        if(s[i] == 'L')
        {   
            if(s[i] == 'L' && s[i+1] == 'X')
            {   
                if(s[i] == 'L' && s[i+1] == 'X' && s[i+2] == 'X')
                {   
                    if(s[i] == 'L' && s[i+1] == 'X' && s[i+2] == 'X' && s[i+3] == 'X')
                    {
                        temp = temp + 80;
                        i++;
                        i++;
                        i++;
                        continue;
                    }
                    else
                    {
                    temp = temp + 70;
                    i++;
                    i++;
                    continue;
                    }
                }
                else
                {
                temp = temp + 60;
                i++;
                continue;
                }
            }
            else
            {
            temp = temp + 50;
            }
        }
        if(s[i] == 'I')
        {   
            if(s[i] == 'I' && s[i+1] == 'I')
            {   
                if(s[i] == 'I' && s[i+1] == 'I' && s[i+2] == 'I')
                {
                    temp = temp + 3;
                    i++;
                    i++;
                    continue;
                }     
                else
                {
                temp = temp + 2;
                i++;
                continue;
                }
            }
            else if(s[i] == 'I' && s[i+1] == 'V')
                 {
                    temp = temp + 4;
                    i++;
                    continue;
                 }
            else if(s[i] == 'I' && s[i+1] == 'X')
                 {
                    temp = temp + 9;
                    i++;
                    continue;
                 }
            else
            {
            temp = temp + 1;
            }
        }
        if(s[i] == 'V')
        {   
            if(s[i] == 'V' && s[i+1] == 'I')
            {
                if(s[i] == 'V' && s[i+1] == 'I' && s[i+2] == 'I')
                {   
                    if(s[i] == 'V' && s[i+1] == 'I' && s[i+2] == 'I' && s[i+3] == 'I')
                    {
                        temp = temp + 8;
                        i++;
                        i++;
                        i++;
                        continue;
                    }
                    else
                    {
                    temp = temp + 7;
                    i++;
                    i++;
                    continue;
                    }
                }
                else
                {
                temp = temp + 6;
                i++;
                continue;
                }
            }
            else
            {
            temp = temp + 5;
            }
        }
        
    }
    printf("%d\n",temp);
    return 0;
}