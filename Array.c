//Arrays

#include<stdio.h>
#define SIZE 5
int main(){

    int i;
    int arr[5] = {1,2,3,4,5};
    int arr1[SIZE];
    
    for(i=0;i<SIZE;i++){
        printf("Enter %d element:",i+1);
        scanf("%d",&arr1[i]);
    }

    printf("Elements is Array : \n");
    for(i=0;i<SIZE;i++){
        printf("\t%d",arr1[i]);
    }
    
    return 0;
}