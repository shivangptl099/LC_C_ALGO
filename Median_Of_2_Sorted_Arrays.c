#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,k,m,n;
    printf("Enter the Length Of First Sorted Array:\n");
    scanf("%d",&m);
    printf("Enter the Length Of Second Sorted Array:\n");
    scanf("%d",&n);
    int arr_m[10];
    int arr_n[10];
    for(i=0;i<m;i++)
    {
        printf("Please Enter Element %d of First Array In Sorted Order:\n",(i+1));
        scanf("%d",&arr_m[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Please Enter Element %d of Second Array In Sorted Order:\n",(i+1));
        scanf("%d",&arr_n[i]);
    }
    for(i=0;i<m;i++)
    {
        printf("%d\t",arr_m[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr_n[i]);
    }

    for(i=0;i<n;i++)
    {
        arr_m[m] = arr_n[i];
        m++; 
    }

    int temp;
    for(i=0;i<m-1;i++)
    {
        for(j=0;j<m-1;j++)
        {
            if(arr_m[j]>arr_m[j+1])
            {
                temp = arr_m[j];
                arr_m[j] = arr_m[j+1];
                arr_m[j+1] = temp;
            }
        }
    }

    printf("\n");
    for(i=0;i<m;i++)
    {
        printf("%d\t",arr_m[i]);
    }
    printf("\n");
    float M;
    if(m % 2 == 0)
    {
    M = (arr_m[(m/2)-1] + arr_m[((m/2))])/2.0;
    }
    else
    {
    M = arr_m[((m+1)/2)-1];
    }
    printf("m = %d\n",m);
    printf("The Median For The Merged Array is %f\n",M);
    return 0;
}