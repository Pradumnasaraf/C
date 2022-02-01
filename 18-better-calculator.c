#include<stdio.h>

int main(){

    double num1;
    double num2;
    char operator;
    
    printf("Enter a number: ");
    scanf("%lf",&num1);

    printf("Enter an operator (+, -, /, *): ");
    scanf(" %c",&operator);
    
    printf("Enter another number: ");
    scanf("%lf",&num2);

    if(operator == '+'){
        printf("%f\n", num1+num2);
    }
    else if (operator == '-'){
        printf("%f\n", num1-num2);
    }
    else if (operator == '*'){
        printf("%f\n", num1*num2);
    }
    else if (operator == '/'){
        printf("%f\n", num1/num2);
    }
    else{
        printf("Not supported\n");
    }



}