#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack{
    int size;
    int top;
    char* arr;
};

int isAnagram(char * s, char * t){
    struct stack st;
    st.top = -1;
    st.size = strlen(s);
    st.arr = (char*)calloc(10,sizeof(char));

    int i = 0;
    while(i<strlen(s))
    {
            st.arr[st.top] = s[i];
            st.top++;
            i++;
    }
    i = st.top;
    int j = 0;
    while(i>strlen(t))
    {
        for(j = 0;j<strlen(t);j++)
        {
            if(st.arr[i] != t[j])
            {
                return 0;
            }
            else
            {
                t[j] = '_';
            }
        }
        i--;
    }
    return 1;
}

int main()
{
    char* s;
    printf("Enter The First String:\n");
    gets(s);
    char* t;
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