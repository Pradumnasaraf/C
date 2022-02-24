#include<stdio.h>
#include<stdlib.h>

int main(){
    int age =30;
    int * pAge = &age;
    double gpa =2.0;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;

    printf("%p\n", &age); //two ways to doind it
    printf("%p\n", pAge);
    

}