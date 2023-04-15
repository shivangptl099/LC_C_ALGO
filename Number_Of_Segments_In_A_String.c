int countSegments(char * s){
    int i = 0;
    if(strlen(s) == 0)
    {
        return i;
    }
    int x = 1;
    if(strlen(s) == 1)
    {
        return x;
    }
    while(i<strlen(s))
    {
        if(s[i] == ' ')
        {
            x++;
        }
        i++;
    }
    if(x-1 == strlen(s))
    {
        return 0;
    }
    return x;
}