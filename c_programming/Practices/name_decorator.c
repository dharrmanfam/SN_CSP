//SN 6th Name Decorator
#include <stdio.h>
#include <string.h>
int main(void){
    char first_name[30];
    char decorated_name[50]= "";
    printf("What is your first name?\n");
    
    scanf("%s", first_name);
    
    strcat(decorated_name, "(((");
    strcat(decorated_name, first_name);
    strcat(decorated_name, ")))");

    printf("%s", decorated_name);
    
    
    
    return 0;
}

