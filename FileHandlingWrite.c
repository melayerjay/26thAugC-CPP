#include<stdio.h>
#include<string.h>

int main(){
    
    char data[50];

    FILE *fp;

    fp = fopen("sample.txt","a");

    if(fp == NULL){
        printf("\nFile Not Found.");
    }else{
        printf("Enter String :");

        gets(data);

        if(strlen(data)>0){
            fprintf(fp,data);
        }
    }



    return 0;
}