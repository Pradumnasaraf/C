#include<stdio.h>
#include <stdlib.h>

// collection of code

// Defining the dunction with only one parameter (String)
void sayHi(char name[]){
    printf("Hello %s, how are you?\n", name);
} 

void nameAge (char name[], int age){
    printf("Hello your name is %s and you are %d yaers old\n", name, age);
}

int main(){

    // Calling the function here which aslo includes a argument (they are actual)
    sayHi("Praduma");
    sayHi("Tom");
    sayHi("Noman");

    // Calling the function which includes two argument.
    nameAge("Praduma",20);

}


