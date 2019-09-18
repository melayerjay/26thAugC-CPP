//Strings 

#include<stdio.h>
#include<string.h>

int main(){

//    char str[5] = {'H','E,'L','L','O'};

    char str[5] = "Hello";
    char str1[5] = "world";
    int i;

    // for(i=0;i<5;i++){
    //     scanf("%c",&str[i]);
    // }
    //scanf("%s",&str);

    //gets(str);

    // for(i=0;i<5;i++){
    //     printf("%c",str[i]);
    // }

    //printf("%s",str);

    // puts(str);

    // for(i=0;i<5;i++){
    //     if(i%2 == 0){
    //         printf("%c",str[i]);
    //     }
    // }

    strrev(str1);

    puts(str1);

    return 0;
}

//This is my PC
//PC my is This