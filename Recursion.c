#include<stdio.h>


int start,end,sum;

void PrintNaturalNumber(){
    if(start>end){
        return;
    }else{
        printf("%d\n",start);
        start++;
        PrintNaturalNumber();
    }
}

void PrintEvenOdd(int a,int b){
    //printf("Here\n");
    if(a>b){
        return;
    }else{
        if(a%2 != 0){
            printf("%d\n",a);
        }
        PrintEvenOdd(a+1,b);
    }
}

int Sum(int a,int b){
    if(a == b){
        return a;
    }else{
        return a + Sum(a+1,b);
    }
}

int Factorial(int a){
    if(a == 0){
        return 1;
    }else{
        return a * Factorial(a-1);
    }



}

int main(){

    printf("Enter start Number :");
    scanf("%d",&start);

    printf("Enter End Number :");
    scanf("%d",&end);

    //PrintNaturalNumber(start,end);
    //PrintEvenOdd(start,end);
    
    //printf("Sum is %d",Sum(start,end));
}

