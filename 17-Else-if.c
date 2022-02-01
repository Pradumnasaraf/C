#include<stdio.h>
#include <stdlib.h>

int maxNum(int num1, int num2, int num3){
    int result;
    // && is used to check both conditons are true or not
    if (num1 >= num2 && num1 >= num3) {
        result = num1;
    }
    else if(num2 >= num1 && num2 >= num3){ // else if - if we ant to compare more than 2 things
       result = num2;
    }
    else{
        result = num3;
    }
    return result;
}

int main(){
   printf("%d\n", maxNum(25,96, 33));
}

