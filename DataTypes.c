//Different Data Types

#include<stdio.h>

int main(){

    char inputCharacter;
    int inputInteger;
    float inputFloat;
    double inputDouble;


    printf("Enter Character :");
    scanf("%c",&inputCharacter);

    printf("Enter Integer :");
    scanf("%d",&inputInteger);

    printf("Enter Float :");
    scanf("%f",&inputFloat);
    
    printf("Enter Double :");
    scanf("%lf",&inputDouble);
    //int size;

    // size = sizeof(char);
    // printf("%d \n\n",size);

    // size = sizeof(int);
    // printf("%d \n\n",size);
    
    // size = sizeof(float);
    // printf("%d \n\n",size);
    
    // size = sizeof(double);
    // printf("%d \n\n",size);

    printf("%c \n",inputCharacter);
    printf("%d \n",inputInteger);
    printf("%f \n",inputFloat);
    printf("%lf \n",inputDouble);

    return 0;
}