#include<stdio.h>

int main(){
    char color[20];
    char pluralNoun[20];
    char celebrity[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity first name: ");
    scanf("%s", celebrity);

    printf("Roses are %s\n",color); 
    printf("%s are blue\n",pluralNoun); 
    printf("I alove %s\n",celebrity); 
}