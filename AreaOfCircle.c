//Area Of Circle

#include<stdio.h>

#define PI 3.14

int main(){
    int radius,area;

    printf("Enter Radius:");
    scanf("%d",&radius);

    area = 2 * PI * radius * radius;

    printf("Area : %d",area);

    return 0;
}