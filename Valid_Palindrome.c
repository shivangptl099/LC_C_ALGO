bool isPalindrome(char * s){
    char* s1 = (char*)malloc((strlen(s))*sizeof(char));
    int i,j;
    j = 0;
    for(i = 0;i<strlen(s);i++)
    {
        if(s[i]>64 && s[i]<91)
        {
            s1[j] = s[i] + 32;
            j++;
        }
        else if(s[i]>96 && s[i]<123)
        {
            s1[j] = s[i];
            j++;
        }
    }
    j = j - 1;
    for(i = 0;i<j;i++)
    {
        if(s[i] != s1[j])
        {
            return false;
        }
        j--;
    }
    return true;
}
