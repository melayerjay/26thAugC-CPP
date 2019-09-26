//Pointers

#include<stdio.h>

int main(){
    int var1 = 10;
    int var2 = 20;
    int arr1[5] = {1,2,3,4,5};
    int sum;
    int *ptr1;
    int *ptr2;
    int i;

    printf("Address of var1 : %d\n",&var1);
    printf("Address of var2 : %d\n",&var2);

    ptr1 = &var1;
    ptr2 = &var2;

    sum = *ptr1 + *ptr2;

    printf("Output of ptr1 : %d\n",ptr1);
    printf("Output of ptr2 : %d\n",ptr2);

    printf("Output of ptr1 : %d\n",*ptr1);
    printf("Output of ptr2 : %d\n",*ptr2);

    printf("sum is : %d\n",sum);

    for(ptr1 = &arr1[0]; ptr1<&arr1[5]; ptr1++){
        printf("%d\t",*ptr1);
    }
}