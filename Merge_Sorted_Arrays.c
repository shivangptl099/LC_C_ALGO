#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,m,n;
    printf("m = ?\n");
    scanf("%d",&m);
    printf("n = ?\n");
    scanf("%d",&n);

    int *nums1 = (int*)malloc(m*sizeof(int));
    int *nums2 = (int*)malloc(n*sizeof(int));

    for(i = 0;i<m;i++)
    {
        printf("Enter element %d for array 1: \n",i+1);
        scanf("%d",&nums1[i]);
    }

    for(i = 0;i<n;i++)
    {
        printf("Enter element %d for array 2: \n",i+1);
        scanf("%d",&nums2[i]);
    }

    int *nums3 = (int*)malloc((m+n)*sizeof(int));

    for(i = 0;i<m;i++)
    {
        nums3[i] = nums1[i];
    }
    int j = 0;
    for(i = m;i<m+n;i++)
    {
        nums3[i] = nums2[j];
        j++;
    }

    for(i = 0;i<m+n;i++)
    {
        printf("%d\t",nums3[i]);
    }

    return 0;
}