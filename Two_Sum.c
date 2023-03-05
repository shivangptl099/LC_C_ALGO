#include<stdio.h>
#define size 10

int main(){

    int arr[size];
    int i,j,num,target,temp1,temp2;

    printf("How Many Elements U Wanna Enter?\n");
    scanf("%d",&num);

    for(i=0;i<num;i++){
        printf("Enter The Elements Of Array:\n");
        scanf("%d",&arr[i]);
    }
    printf("Enter The Target:\n");
    scanf("%d",&target);

    printf("The Entered Elements are:\n");
    for(i=0;i<num;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    printf("The Index pair for sum of the target is\n");
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++){
            if(arr[i]+arr[j]== target){
                 printf("[%d,%d]\n",i,j);
             }
        }
    }
    printf("Thank You\n");
    return 0;
}