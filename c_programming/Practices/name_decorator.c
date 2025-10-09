//SN 6th Name Decorator
#include <stdio.h>
#include <string.h>
int main(void){
    char first_name[30];
    printf("What is your first name?\n");
    scanf("%s", first_name);
    printf("[%s]", first_name);
    strcat(first_name, " ");
    
    
    
    return 0;
}

