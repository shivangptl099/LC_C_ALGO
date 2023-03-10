#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,temp;
    printf("Enter A Number:\n");
    scanf("%d",&n);
    temp = n;
    int temp1 = 0;
    int temp2 = 0;
    if(temp<3999 && temp >999)
    {
        temp1 = n % 1000;
        temp2 = n - temp1;
        temp1 = temp2 / 1000;

        for(int i =0;i<temp1;i++)
        {
            printf("M");
        }
    temp = n % 1000;
        if(temp>99 && temp<999)
    {
        temp1 = temp % 100;
        temp2 = temp - temp1;
        if(temp2 == 100)
        {
            printf("C");
        }
        else if(temp2 == 200 || temp2 == 300)
        {
            temp = temp2 / 100 ;
            for(int i = 0; i< temp ; i++)
            {
                printf("C");
            }
        }
        else if(temp2 == 400)
        {
            printf("CD");
        }
        else if(temp2 == 500)
        {
            printf("D");
        }
        else if(temp2 == 600 || temp2 == 700 || temp2 == 800)
        {
            printf("D");
            temp = temp2 - 500;
            temp = temp / 100;
            for(int i = 0; i < temp ; i++)
            {
                printf("C");
            }
        }
        else
        {
            printf("CM");
        }
    temp = n%100;
    if(temp>9 && temp <99)
    {
        temp1 = temp % 10;
        temp2 = temp - temp1;
        
        if(temp2 == 10)
        {
            printf("X");
        }
        else if(temp2 == 20 || temp2 == 30)
        {
            temp = temp2 /10;
            for(int i =0;i<temp;i++)
            printf("X");
        }
        else if(temp2 == 40)
        {
            printf("XL");
        }
        else if(temp2 == 50)
        {
            printf("L");
        }
        else if(temp2 == 60 || temp2 == 70 || temp2 == 80)
        {
            temp = temp2 -50;
            temp = temp /10;
            printf("L");
            for(int i=0;i<temp;i++)
            {
                printf("X");
            }
        }
        else 
        {
            printf("XC");
        }
     temp = n%10;
     if(temp>0 && temp<10)
     {
        if(temp == 1 || temp == 2 || temp == 3)
        {
            for(int i=0;i<temp;i++)
            {
                printf("I");
            }
        }
        else if(temp == 4)
        {
            printf("IV");
        }
        else if(temp == 5)
        {
            printf("V");
        }
        else if(temp == 6 || temp == 7 || temp == 8)
        {
            printf("V");
            temp2 = temp - 5;
            for(int i=0;i<temp2;i++)
            {
                printf("I");
            }
        }
        else
        {
            printf("IX");
        }
    }
    }
    }
    }


    if(temp>99 && temp<999)
    {
        temp1 = temp % 100;
        temp2 = temp - temp1;
        if(temp2 == 100)
        {
            printf("C");
        }
        else if(temp2 == 200 || temp2 == 300)
        {
            temp = temp2 / 100 ;
            for(int i = 0; i< temp ; i++)
            {
                printf("C");
            }
        }
        else if(temp2 == 400)
        {
            printf("CD");
        }
        else if(temp2 == 500)
        {
            printf("D");
        }
        else if(temp2 == 600 || temp2 == 700 || temp2 == 800)
        {
            printf("D");
            temp = temp2 - 500;
            temp = temp / 100;
            for(int i = 0; i < temp ; i++)
            {
                printf("C");
            }
        }
        else
        {
            printf("CM");
        }
    temp = n%100;
    if(temp>9 && temp <99)
    {
        temp1 = temp % 10;
        temp2 = temp - temp1;
        
        if(temp2 == 10)
        {
            printf("X");
        }
        else if(temp2 == 20 || temp2 == 30)
        {
            temp = temp2 /10;
            for(int i =0;i<temp;i++)
            printf("X");
        }
        else if(temp2 == 40)
        {
            printf("XL");
        }
        else if(temp2 == 50)
        {
            printf("L");
        }
        else if(temp2 == 60 || temp2 == 70 || temp2 == 80)
        {
            temp = temp2 -50;
            temp = temp /10;
            printf("L");
            for(int i=0;i<temp;i++)
            {
                printf("X");
            }
        }
        else 
        {
            printf("XC");
        }
     temp = n%10;
     if(temp>0 && temp<10)
     {
        if(temp == 1 || temp == 2 || temp == 3)
        {
            for(int i=0;i<temp;i++)
            {
                printf("I");
            }
        }
        else if(temp == 4)
        {
            printf("IV");
        }
        else if(temp == 5)
        {
            printf("V");
        }
        else if(temp == 6 || temp == 7 || temp == 8)
        {
            printf("V");
            temp2 = temp - 5;
            for(int i=0;i<temp2;i++)
            {
                printf("I");
            }
        }
        else
        {
            printf("IX");
        }
    }
    }
    }






    if(temp>9 && temp <99)
    {
        temp1 = temp % 10;
        temp2 = temp - temp1;
        
        if(temp2 == 10)
        {
            printf("X");
        }
        else if(temp2 == 20 || temp2 == 30)
        {
            temp = temp2 /10;
            for(int i =0;i<temp;i++)
            printf("X");
        }
        else if(temp2 == 40)
        {
            printf("XL");
        }
        else if(temp2 == 50)
        {
            printf("L");
        }
        else if(temp2 == 60 || temp2 == 70 || temp2 == 80)
        {
            temp = temp2 -50;
            temp = temp /10;
            printf("L");
            for(int i=0;i<temp;i++)
            {
                printf("X");
            }
        }
        else 
        {
            printf("XC");
        }
     temp = n%10;
     if(temp>0 && temp<10)
     {
        if(temp == 1 || temp == 2 || temp == 3)
        {
            for(int i=0;i<temp;i++)
            {
                printf("I");
            }
        }
        else if(temp == 4)
        {
            printf("IV");
        }
        else if(temp == 5)
        {
            printf("V");
        }
        else if(temp == 6 || temp == 7 || temp == 8)
        {
            printf("V");
            temp2 = temp - 5;
            for(int i=0;i<temp2;i++)
            {
                printf("I");
            }
        }
        else
        {
            printf("IX");
        }
    }
    }

    if(n>0 && n<10)
     {
        if(n == 1 || n == 2 || n == 3)
        {
            for(int i=0;i<n;i++)
            {
                printf("I");
            }
        }
        else if(n == 4)
        {
            printf("IV");
        }
        else if(n == 5)
        {
            printf("V");
        }
        else if(n == 6 || n == 7 || n == 8)
        {
            printf("V");
            temp2 = n - 5;
            for(int i=0;i<temp2;i++)
            {
                printf("I");
            }
        }
        else
        {
            printf("IX");
        }
    }




    return 0;
}