#include<stdio.h>
#include <stdlib.h>

int maxNum(int num1, int num2){
    int result;
    if (num1>num2) {
        result = num1;
    }
    else{
       result = num2;
    }
    return result;

}


int main(){
   printf("%d\n", maxNum(2555,96));


}

