// SN 6th Variables Notes
#include <stdio.h>

int main(void){
    int num;
    const float pi = 3.14; // constants can't be changed
    char grade; //Will only hold 1 letter
    char name[20];
    //bool passing = true;
    printf("%d",num);
   int num = 4;               
   float pi = 3.14;         
    // The int in front of the statement show what type of data to expect and CANNOT be changed
    // Static: typing can't change later
    // Dynamic: Performs manual memory management
    // Float: Decimal number
    // Char: Holds only one letter
    // Bool: Checks if something is true
    // int, float, and char's are the 3 common data types.
     printf("What is your letter grade: ");
     scanf("%c", &grade); // %c:what type of data and &grade: where to find it

     printf("Tell me a number: ");
     scanf("%d", &num);
     //This input lets me get a space
     printf("Tell me your name: ");
     fgets(name, sizeof(name), stdin);
     printf("%d\n", num);
     printf("%s has a %c grade in the cladss\n", name, grade);

     return 0;
}


// In c, we have to tell the computer what type of data is going to be inside the variable, in order to declare the number of bytes. 
//int= 4 bytes
//float= 4 bytes
//double= 8 bytes
//char= 1 byte

//string = list of characters for a string.

 /*
     int num = 4;              %d or %i   
     float pi = 3.14;          %f  
         char name                 %c    */  