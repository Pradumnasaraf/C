#include<stdio.h>

int main(){
    //
    for (int i = 1; i <= 5; i++)
    {
       printf("%d\n", i);
    }
    
    // reverse loop
    for (int i = 5; i>=1; i--)
    {
       printf("%d\n", i);
    }

    // looping though array
    int numbers[] = {12, 23, 33, 42, 53};
    for(int i=0; i<6; i++){
         printf("%d\n", numbers[i]);
    }
}
    

