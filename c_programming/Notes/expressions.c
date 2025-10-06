//SN 6th Expressions Notes
#include <stdio.h>
#include <math.h> //point is to make availability of different math operators

int main(void){
    int year = 2025; //Whole numbers
    float pi = 3.14; //decimals
    double long_pi = 3.14159265359; // decimals that are 2x as long

    printf("8/3 = %f\n, (float) 8/3"); // automatically an integer division //cast is specifically stating the data type. after the % sign and beforr the division, operation.
    printf("8/3 =%1.2f\n", 8/3.0); //float division in c requires one of numbers to be a decimal, or float
    // after the % sign, put in how many before and after the decimal of numbers you want
    // when mixing an integer and float operations in c, it'll always be a float.
    printf("2 ^ 4 = %f\n", pow(2,4));
    // +: addition
    // -: subtraction
    // /: division
    // *: multiplication
    // %: modulo (remainder)

    year += 1;
    year ++; //both does the exact same thing as line 19,

    return 0;
}
