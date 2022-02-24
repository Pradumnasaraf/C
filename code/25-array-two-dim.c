#include<stdio.h>
#include<stdlib.h>

int main(){

    // 2D Array
    int numbers[3][2] = {{1,2},{2,3},{4,5}};

    for(int i=0; i<3; i++){
        for (int j=0; j<2; j++){ 
            printf("%d", numbers[i][j]);
            
        }  
        printf("\n");
    }
}