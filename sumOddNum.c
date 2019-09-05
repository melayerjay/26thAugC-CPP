//sum of all odd numbers from 1 to n

#include<stdio.h>

int main(){
    int num,i;
    char choice;
   do{

    printf("Enter Num : ");
    scanf("%d,",&num);

    for(i=0;i<num;i++){

        if(i%2 != 0){
            printf("%d\t",i);
        }
    }
    
    printf("\nDo you want to Continue <Y/N> :");
    scanf(" %c",&choice);
   }while(choice != 'n');
    //i=0;
    // while(i<=num){
    //     printf("%d\n",i);
    //     i++;
    // }

    // do{
    //     printf("%d\n",i);
    //     i++;
    // }while(i<=num);

    //printf("\n%d",i);

    return 0;
}