#include<stdio.h>

int main(){

    int age;
    printf("Please enter your age :");
    scanf("%d", &age); // scanf is used for taking input, &age is pointer
    printf("You are %d yaers old\n" ,age);

    double gpa;
    printf("Please enter your GPA :");
    scanf("%lf", &gpa); // we use %lf
    printf("Your gpa is %f\n", gpa);

    char grade;
    printf("Please enter your garde :");
    scanf(" %c", &grade); // we use %lf
    printf("Your grade is %c\n", grade);
}