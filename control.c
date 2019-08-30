//Program Demonstrating IF ELSE

#include<stdio.h>

int main(){
    int num;

    printf("Enter Number ");
    scanf("%d",&num);

    if(num < 0){
        printf("\nNegative Number");
        if(num > -5){
            printf("\nGreater than -5");
        }else{
            printf("\nLower than -5");
        }
    }else if(num == 0){
        printf("Number is Zero");
    }else {
        printf("\nPositive Number");
        if(num > 5){
            printf("\nGreater than 5");
        }else{
            printf("\nLower than 5");
        }
    }

    

    // if(num > 0){
    //     printf("\nPositive Number");
    // }

    return 0;
}