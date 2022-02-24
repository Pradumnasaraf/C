#include<stdio.h>

int main(){

char name[20]; // specifying the number of char that we will take as a input.
printf("Enter your name : ");
scanf(" %s", name);
printf("Your name is %s\n" ,name); // no need to add & here

/*this above fucntion(scanf) will only take the char till fisrt whitespace like in "Tom hoe" , it will take onlt Tom */
char namee[20]; 
printf("Enter your name : ");
fgets(namee, 20, stdin); // fgets use for taking string input, aruments -(contanier, no of char, standard I/O)
printf("Your name is %s\n" ,namee); 





}