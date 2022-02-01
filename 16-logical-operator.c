#include<stdio.h>
#include <stdlib.h>
 
int main(){

    // && - Both the condition need to be True

    if(3>2 && 2>5){
        printf("True\n");
    }
    else{
         printf("False\n");
    }

    // || - One of the condition need to be True

    if(3>2 || 2>5){  
        printf("True\n");

    }
    else{
         printf("False\n");
    }

    // ! - Not operator
    // negation - operator (whole nature of statement will get reversed)

    if (!(3>2)){
        printf("True\n");
    }
    else{
        printf("False\n");
    }

}


