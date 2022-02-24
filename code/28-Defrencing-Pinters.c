#include<stdio.h>
#include<stdlib.h>

int main(){

    int age = 30;
    int *pAge =&age;

    printf("%d\n", *pAge); // get the store value with the adress
    printf("%d\n", *&age); // get the store value with the adress




}