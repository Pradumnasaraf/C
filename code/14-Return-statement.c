#include<stdio.h>
#include <stdlib.h>

double cubeANumber (double number){
   double cube = number*number*number;
   // return back the value where function is called.
   return cube; // it break it out here


}

int main(){
    //  cubeANumber(3) will return a double value
    printf("Answer: %f\n", cubeANumber(3));
}


