//SN 6th Silly Sentences
#include <stdio.h>
#include <string.h>
int main(void){
    
    char name[100];
    char adverb[100];
    char verb[100];

    printf("Give me a name:\n");
    scanf("%s", name);

    printf("Give me an adverb:\n");
    scanf("%s", adverb);

    printf("Give me a verb with -ing:\n");
    scanf("%s", verb);

    printf("Tomorrow, %s will be %s around %s at the park!\n", name, verb, adverb);
    
    
    
    

    return 0;
}