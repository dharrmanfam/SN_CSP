//SN 6th My Family Loop
#include <stdio.h>
#include <string.h>

int main(void){
    char friends[10][10] = {"Charlie", "Ally", "Consti", "Audrey", "LouLou"};
    
    int num = 5; 
    
    for (int i = 0; i < num; i++) {
        printf("Hello, %s!\n", friends[i]);
    }

    return 0;
}


