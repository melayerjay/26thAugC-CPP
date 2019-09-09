//Functions

#include<stdio.h>

int x,y;

void max(int, int);

int addition();

void fun(int *x) 
{ 
   *x = 30; 
}
int main(){
    int x = 20; 
    fun(&x); 
    printf("x = %d", x); 
    
    // int max1;

    // printf("Enter Number 1:");
    // scanf("%d",&x);

    // printf("Enter Number 1:");
    // scanf("%d",&y);



    // max(x,y);



    // // printf("\n Max is : %d",max1);

    // // max1 = addition();
    // // printf("Addition is: %d", max1);

    // return 0;

    
}

void max(int a, int b){
    
    a = 10;
    
    if(a>b){
        printf("IN MAX FUNCTION is %d",a);
        
        //return a;
    }else{
        printf("IN MAX FUNCTION %d",b);
        
       // return b;
    }
}

// int addition(){
//     return x+y;
// }

 
  