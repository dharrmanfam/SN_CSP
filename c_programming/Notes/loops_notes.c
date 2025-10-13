//SN 6th Loops and Arrays Notes
#include <stdio.h>
#include <string.h>

int main(void){
    // For loops
    int nums[] = {4,684,1,64,2,814,36,456,15};
    char candy[5][20] = {"Skittles", "Butterfinger", "Reese's", "Twix", "KitKat"};
    
    for(int x = 0; x<11; x++){ // ++ is incrementing by 1
        printf("%d\n", nums[x]);
    }
    for(int i=0; i<5; i++){
        printf("%s is my favorite candy!\n", candy[i]); 
    }
    for (int num = 1; num<11; num ++){
        printf("%d\n", num);
    }
    



    return 0;

    //while loops
    int goose = 6;
    int count = 0;
    while (count <= goose){
        printf("Duck\n");
        count ++;
    }
        printf("goose!");
    
}

/*What is a loop? 
    It is a block of code that repeat until a specified condition is met without having to repeat the statements.

What are the two types of loops?
    For loops and while loops are the two types.

What is iteration
    Iteration is how many times the code is repeating.

What are arrays? 
    Arrays are a collection of elements of the same data type that allow storage of multiple values under a single variable name. 

How do you make lists in C? 
    By first stating the data type the naming the list then put in brackets of how many could be in that list. Finally put in curly brackets the contents of the list.

How do you make for loops in C? 
    Write "for" to make it a for list then restrict the code with what it starts with, what extent it goes to, then what it increments by.

How do you make while loops in C?
    It is very similar to while loops in python , but the restrictions are included inside a parenthesis and the directions are held inside curly brackets.
    */
