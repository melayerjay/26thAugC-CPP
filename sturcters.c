//Structers

#include<stdio.h>

struct Employee{
    int emp_no;
    char name[20];
    float salary;
};

// int a;
struct Employee a;
struct Employee arr[5];

void getData(){
    printf("\nEnter ID:");
    scanf("%d",&a.emp_no);
    printf("\nEnter Name:");
    scanf("%s",&a.name);
    printf("\nEnter Salary:");
    scanf("%f",&a.salary);
}

void printdata(){
    printf("Emp No: %d \t Name : %s \t Salary : %f\n",a.emp_no,a.name,a.salary);
}

void GetDataArr(){
    int i;
    for(i=0;i<3;i++){
        printf("\nEnter ID:");
        scanf("%d",&arr[i].emp_no);
        printf("\nEnter Name:");
        scanf("%s",&arr[i].name);
        printf("\nEnter Salary:");
        scanf("%f",&arr[i].salary);
    }
}

void PrintDataArr(){
    int i;
    for(i=0;i<3;i++){
        printf("Emp No: %d \t Name : %s \t Salary : %f",arr[i].emp_no,arr[i].name,arr[i].salary);
    }
}

int main(){
    int i;
   // getData();
   // printdata();

    GetDataArr();
    PrintDataArr();

    return 0;

}