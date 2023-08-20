struct stack
{
    int size;
    int top;
    char* arr;
};

bool isValid(char * s){
    struct stack st;
    st.size = strlen(s);
    st.top = -1;
    st.arr = (char*)malloc(st.size*sizeof(char));

    int i;
    char t;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.top++;
            st.arr[st.top] = s[i];
        }
        else if(s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if(st.top == -1)
            {
                break;
            }
            else if(s[i] == ')')
            {
               t = st.arr[st.top];
               st.top--;
               if(t != '(') 
               {
                   break;
               }
            }
            else if(s[i] == '}')
            {
               t = st.arr[st.top];
               st.top--;
               if(t != '{') 
               {
                   break;
               }
            }
            else if(s[i] == ']')
            {
               t = st.arr[st.top];
               st.top--;
               if(t != '[') 
               {
                   break;
               }
            }
        }
    }
    if(st.top == -1 && i == strlen(s))
    {
        return true;
    }
    else
    {
        return false;
    }
}
