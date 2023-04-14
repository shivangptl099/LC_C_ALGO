int firstUniqChar(char * s){
    int i,j,x;
    for(i = 0;i<strlen(s);i++)
    {
        x = 0;
        for(j = 0;j<strlen(s);j++)
        {
            if(s[i] == s[j])
            {
                x++;
            }
        }
        if(x == 1)
        {
            break;
        }
    }
    if(x != 1)
    {
        return -1;
    }
    return i;
}