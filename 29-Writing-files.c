#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE *fpointer = fopen("/home/pradumna/coding/C-C++/text.txt", "w"); // a use a for append

    fprintf(fpointer,"Jim, salesman \n,tom, accountant");

    fclose(fpointer);
}