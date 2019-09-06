//2d Array

#include<stdio.h>
#define Size 3

int main(){

    int arr1[Size][Size];
    int arr2[Size][Size];
    int result[Size][Size];
    int i,j;

    printf("Enter Elements of array 1:");

    for(i=0;i<Size;i++){
        for(j=0;j<Size;j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter Elements of array 2:");

    for(i=0;i<Size;i++){
        for(j=0;j<Size;j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    for(i=0;i<Size;i++){
        for(j=0;j<Size;j++){
            //scanf("%d",&arr2[i][j]);
            result[i][j] = arr1[i][j] + arr2[i][j];

            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }

    return 0;

}