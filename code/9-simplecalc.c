#include<stdio.h>

int main(){

    double number1;
    double number2;
    printf("Enter the first number: ");
    scanf(" %lf", &number1); // instaed of %f we use %lf
    printf("Enter the second number: ");
    scanf(" %lf", &number2);
    double total = number1 + number2;
    printf("Sum = %f\n", total);

}