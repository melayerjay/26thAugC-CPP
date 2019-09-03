//Switch Case program

#include<stdio.h>

int main(){
    
    int num;
    char alpha;

    // printf("Enter Number :");
    // scanf("%d",&num);

    // switch(num){
    //     case 0 : 
    //         printf("\nZero");
    //         break;
    //     case 1 :
    //         printf("\nOne");
    //         break;
    //     case 2 : 
    //         printf("\nTwo");
    //         break;
    //     default :
    //         printf("Invalid Input");
    //         break;
    // }

    printf("\nEnter char ");
    scanf("%c",&alpha);

    switch(alpha){
        case 'a' : 
            printf("INPUTED A");
            break;
        default : 
            printf("\nError");
            break;
    }    


    return 0;
}