#include <stdio.h>

int main(){

/* Variables are type of container, we can change value/vary while writing the program*/

char characterName[] ="Pradumna Saraf"; //It's a string containing

int myAge = 12; // storing numbers
myAge =13;

char grade = 'A'; // character need to be in single quotted
grade = 'B';

printf("My name is %s\n", characterName);       // %s - for string placeholder
printf("My age is %d\n", myAge);               // %d - for integer placeholder
printf("My age is %c\n", grade);               // %c - for character placeholder

}