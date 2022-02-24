#include<stdio.h>
#include<stdlib.h>

int main(){

    char line[255];
    FILE *fpointer = fopen("/home/pradumna/coding/C-C++/text.txt", "r"); // r is use for reading

    fgets(line,255, fpointer);
    printf("%s",line);
    fgets(line,255, fpointer);
    printf("%s",line);

    fclose(fpointer);
}
