//SN 6th Conditionals Notes
#include<stdio.h>
#include <string.h>

/*

<: less than
>: greater than
<=: less than or equal to
>=: greater than or equal to
==: equal to
!= : not equal to

*/
int main(void){
    int grade;
    char name[50];
    printf("What is your grade?\n");
    scanf("%d", &grade);
    
    printf("What is your name?\n");
    scanf("%s", &name);

    printf("%d\n", strcmp(name,"Ms.Larose"));
    if(strcmp(name,"Ms.Larose")==0){
        printf("You don't have a grade!\n");
    }
    else if (grade >=90){
        printf("You have an A!\n");
    }else if(grade >=80){
        printf("You have a B!\n");
    }else{
        printf("You don't have an A!\n");
    }


    return 0;
}





/*What puts something inside of the “if” statement?
    A curly bracket puts them inside of the if statement

How are conditions written in C?
    Conditionalse very similar to python, but you put a parenthesis around the variable you're testing and put the test inside of a curly bracket.

How do we write elif conditions in C?
    The same way with if statements, but in C, write "else if"

When do else conditions run?
    When none of the elif statements nor the if statements are true.
    
What are the 3 logical operators in C?
    LOGICAL OPERATORS
    &&: and
    ||: or
    !: not */