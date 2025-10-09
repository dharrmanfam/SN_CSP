//SN 6th Strings Notes
#include <stdio.h>
#include <string.h>

int main(void){
    
    char name[] = "Xavier"; //set up to char to deal with letters AND include brackets
    // so name cannot be longer than 6, which is xavier.
    char last_name [25];
    char full_name[100];
    name[2] = 'j';
    printf("Please tell me your last name: \n");
    scanf("%s", last_name);
    
    printf("[%s]", full_name);
    
    strcat(full_name, name); //concatenation
    printf("[%s]\n", name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    printf("[%s]\n", full_name);

    strcmp(last_name, "LaRose"); //compares last name and larose, will return 0 if equal and negative when not.

    printf("%zu\n", strlen(full_name)); //this allows us to get the length of the string
    printf("%zu\n", sizeof(full_name)); //sizeof gives us how long it can be

    return 0;
}




/* 1.)What is the difference between a string and a character?
    A string is a single symbol while a string is a sequence of multiple characters

2.)What types of quotation marks do we need for a string?
    double quotes for strings

3.)What library do we need to include to access the string functions in C?
    the string.h library

4.)List functions the library allows us to use.
    <math.h>
    <stdio.h>
    <string.h>

5.)How do we concatenate strings in C?
    use "strcat()" to concatenate

6.)How do we get individual characters from a string in C?
    You call it a letter then recall it down when using it.
*/