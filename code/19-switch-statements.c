#include<stdio.h>

int main()
{
    // similar to if-else
    char grade ='A';
    switch(grade) {
        case 'A': printf("You did great\n"); 
        break;
        case 'B': printf("You did okay\n"); 
        break;
        case 'C': printf("You did poor\n"); 
        break;
        case 'D': printf("You failed\n"); 
        break;
        default: printf("Invalid grade");

    }



    
    return 0;
}
