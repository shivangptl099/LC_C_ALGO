int lengthOfLastWord(char * s){
    int i,count;
    count = 0;
    for(i = strlen(s)-1;i>=0;i--)
    {
        if(s[i]!=' ')
        {
            count++;
        }
        if(count>0 && s[i]==' ')
        {
            break;
        }
    }
    return count;
}
