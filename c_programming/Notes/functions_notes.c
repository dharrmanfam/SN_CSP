//SN 6th Functions Notes

#include <stdio.h>
void birthday(char* name, int age){ //void is the data type of the return and the other void inside is because it's none
    printf("Happy Birthday to you\n"); // the star wafter character is telling the computer to take in all of the characters in name
    printf("Happy Birthday to you\n");
    printf("Happy Birthday dear %s\n", name);
    printf("Happy Birthday to you\n");
    printf("Happy Birthday %s is now %d\n", name, age);
}

int add(int num_one, int num_two){
    return num_one + num_two;
}
char* get_name(void){
    char* name;
    printf("What is your name: ");
    scanf("%s", name);
    return name;
}
float get_num(void){
    float num;
    printf("Tell me a number:");
    scanf("%f", &num);
    return num;
}

int main(void){
    birthday("Mykel", 15);
    birthday("Lucas", 40);
    birthday("Victoria", 19);
    char* user = get_name();
    birthday(user, 5);
    int addition = add(5,4);
    printf("%d\n", addition);
    printf("%d\n", add(50,37)); //both does same thing
    float our_number = get_num();
    printf("%f\n", our_number);




    
    return 0;
}


/*
What a function is
    A storage container for actions that can be used over and over again.

Why we use functions
    We use functions in order to make things less repetitive and more effcient.

How to write a function in C
    Do not write functions inside other functions
    Outside of main write a function
    Then call the function inside of main

What are arguments and parameters?



How do arguments and parameters work together?


How to use parameters and arguments in python


What are return statements?


How do return statements change how you define a function in C?


What do return statements do with the information


*/