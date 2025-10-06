// SN 6th Variables Notes
#include <stdio.h> //This tells the computer to include the “standard input/output” library.
#include <string.h>
int main(void){ // the main entry point
   int num;
   const float pi = 3.14; // constants can't be changed
   char grade; //Will only hold 1 letter
   char name[20];
   //bool passing = true;
   num = 4;             
   // The int in front of the statement show what type of data to expect and CANNOT be changed
   // Static: typing can't change later
   // Dynamic: Performs manual memory management
   // Float: Decimal number
   // Char: Holds only one letter
   // Bool: Checks if something is true
   // int, float, and char's are the 3 common data types.
   
   printf("What is your letter grade: ");  // printf() takes values to be printed, and scanf() takes the pointers to variables.
   scanf(" %c", &grade); // %c:what type of data and &grade: where to find it
   printf("%c\n", grade);   //echo input


   printf("Tell me a number: ");
   scanf("%d", &num); // "%d" is a decimal integer and "%f" is floating point
    //This input lets me get a space
   printf("%d\n", num); //echo input
  
   getchar();
  
   printf("Tell me your name: ");
   fgets(name, sizeof(name), stdin);
   name[strcspn(name, "\n")] = '\0';  // remove trailing newline
   printf("%s\n", name);  // echo
  
   printf("%s has a %c grade in the class\n", name, grade);


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