//SN 6th First Program C

#include <stdio.h>
int main(void){
    char name [11];

    printf("What is your name:\n");
    fgets(name, sizeof(name), stdin);
    printf("Hello %s, welcome to your first c prorgram!", name);
    
    return 0;
}
