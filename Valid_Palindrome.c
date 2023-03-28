#include<stdio.h>
#include<stdlib.h>
#include<string.h>

_Bool isPalindrome(char * s){
   char* arr = (char*)malloc(strlen(s)*sizeof(char));
   int i,j;
   i = 0;
   j = 0;
   while(i<strlen(s))
   {
       if(s[i] == 'A' || s[i] == 'B' || s[i] == 'C' || s[i] == 'D' || s[i] == 'E' || s[i] == 'F' || s[i] == 'G' || s[i] == 'H' || s[i] == 'I' || s[i] == 'J' || s[i] == 'K' || s[i] == 'L' || s[i] == 'M' || s[i] == 'N' || s[i] == 'O' || s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S' ||s[i] == 'T' || s[i] == 'U' || s[i] == 'V' || s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z' || s[i] == 'a' || s[i] == 'b' || s[i] == 'c' || s[i] == 'd' || s[i] == 'e' || s[i] == 'f' || s[i] == 'g' || s[i] == 'h' || s[i] == 'i' || s[i] == 'j' || s[i] == 'k' || s[i] == 'l' || s[i] == 'm' || s[i] == 'n' || s[i] == 'o' || s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's' || s[i] == 't' || s[i] == 'u' || s[i] == 'v' || s[i] == 'w' || s[i] == 'x' || s[i] == 'y' || s[i] == 'z' || s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9')
       {    
           if(s[i] == 'A' || s[i] == 'B' || s[i] == 'C' || s[i] == 'D' || s[i] == 'E' || s[i] == 'F' || s[i] == 'G' || s[i] == 'H' || s[i] == 'I' || s[i] == 'J' || s[i] == 'K' || s[i] == 'L' || s[i] == 'M' || s[i] == 'N' || s[i] == 'O' || s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S' ||s[i] == 'T' || s[i] == 'U' || s[i] == 'V' || s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z')
           {
               if(s[i] == 'A')
               {
                   s[i] = 'a';
               }
               else if(s[i] == 'B')
               {
                   s[i] = 'b';
               }
               else if(s[i] == 'C')
               {
                   s[i] = 'c';
               }
               else if(s[i] == 'D')
               {
                   s[i] = 'd';
               }
               else if(s[i] == 'E')
               {
                   s[i] == 'e';
               }
               else if(s[i] == 'F')
               {
                   s[i] = 'f';
               }
               else if(s[i] == 'G')
               {
                   s[i] = 'g';
               }
               else if(s[i] == 'H')
               {
                   s[i] = 'h';
               }
               else if(s[i] == 'I')
               {
                   s[i] = 'i';
               }
               else if(s[i] == 'J')
               {
                   s[i] = 'j';
               }
               else if(s[i] == 'K')
               {
                   s[i] = 'k';
               }
               else if(s[i] == 'L')
               {
                   s[i] = 'l';
               }
               else if(s[i] == 'M')
               {
                   s[i] = 'm';
               }
               else if(s[i] == 'N')
               {
                   s[i] = 'n';
               }
               else if(s[i] == 'O')
               {
                   s[i] = 'o';
               }
               else if(s[i] == 'P')
               {
                   s[i] = 'p';
               }
               else if(s[i] == 'Q')
               {
                   s[i] = 'q';
               }
               else if(s[i] == 'R')
               {
                   s[i] = 'r';
               }
               else if(s[i] == 'S')
               {
                   s[i] = 's';
               }
               else if(s[i] == 'T')
               {
                   s[i] = 't';
               }
               else if(s[i] == 'U')
               {
                   s[i] = 'u';
               }
               else if(s[i] == 'V')
               {
                   s[i] = 'v';
               }
               else if(s[i] == 'W')
               {
                   s[i] = 'w';
               }
               else if(s[i] == 'X')
               {
                   s[i] = 'x';
               }
               else if(s[i] == 'Y')
               {
                   s[i] = 'y';
               }
               else if(s[i] == 'Z')
               {
                   s[i] = 'z';
               }
           }
           arr[j] = s[i];
           j++;
       }
       i++;
   }

    char* arr1 = (char*)malloc(strlen(arr)*sizeof(char));
       i = 0;
       j = strlen(arr)-1;
       while(i<strlen(arr))
       {
           arr1[i] = arr[j];
           i++;
           j--;
       }

        i = 0;
        j = 0;
       while(i<strlen(arr))
       {
           if(arr[i]!=arr[j])
           {
               return 0;
           }
           i++;
           j++;
       }
       
}

int main()
{
    char* s = (char*)calloc(1,sizeof(char));
    printf("Enter The String:\n");
    scanf("%[^\n]%*c",s);
    printf("ans : %d\n",isPalindrome(s));
    return 0;
}