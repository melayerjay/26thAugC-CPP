#include<stdio.h>
#include<string.h>

int main(){
    
    char data[50];

    FILE *fp;

    fp = fopen("sample.txt","r");

    if(fp == NULL){
        printf("\nFile Not Found.");
    }else{
        while(fgets(data,50,fp) != NULL){
            //fgets(data,50,fp);
            printf("\nData read: ");
            puts(data);
        }

    printf("\nRead Finish.");
    }
}