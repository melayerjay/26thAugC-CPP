//Program to find Area of Rectangle

#include<stdio.h>

int main(){
    int lenght,breadth,area;

    printf("Enter Lenght:");
    scanf("%d",&lenght);

    printf("Enter Breadth:");
    scanf("%d",&breadth);

    area = lenght * breadth;

    printf("\nArea of Rectangle : %d",area);

    lenght--;
    printf("\n%d",lenght);
}
