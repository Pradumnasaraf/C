#include<stdio.h>
#include<stdlib.h>

int main(){

    int age = 30;
    double gpa =3.4;
    char grade ='A';

    printf("%p\n", &age); // %p stands for pointer for printing out address
    printf("%p\n", &gpa); 
}