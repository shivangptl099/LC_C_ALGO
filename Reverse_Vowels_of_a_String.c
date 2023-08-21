char * reverseVowels(char * s){
int i,j;
char temp;
j = strlen(s)-1;
for(i = 0;i<(strlen(s)/2)-1;i++)
{
if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {
while(j>=(strlen(s)/2))
    {
    if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    j--;
   }
  }
 }
 return s;
}
