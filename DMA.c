#include<stdio.h>
#include<stdlib.h>


int main(){
    int arrSize,i;
    int *ptr;

    printf("Enter Size : ");
    scanf("%d",&arrSize);

   ptr = malloc(arrSize * sizeof(int));

   // ptr = calloc(arrSize,sizeof(int));

    for(i=0;i<arrSize;i++){
        scanf("%d",&ptr[i]);
    }

    printf("\nPrint:");
    for(i=0;i<arrSize;i++){
        printf("%d\t",ptr[i]);
    }
    printf("\nPrint:");
    for(i=0;i<arrSize;i++){
        printf("%d\t",&ptr[i]);
    }

    // ptr = realloc(ptr,(arrSize+4)*sizeof(int));

    // for(i=0;i<arrSize+4;i++){
    //     scanf("%d",&ptr[i]);
    // }

    // printf("\nPrint:");
    // for(i=0;i<arrSize+4;i++){
    //     printf("%d\t",ptr[i]);
    // }

    free(ptr);

    printf("\nPrint:");
    for(i=0;i<arrSize;i++){
        printf("%d\t",ptr[i]);
    }
}