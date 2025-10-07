//SN 6th Variables Practice
#include <stdio.h> 

int main(void) {
    char name[] = "Sophie Nam";
    int number = 6;
    float gpa = 3.8;
    char breakfast[] = "Waffles";
    char favorite_color[] = "Blue";
    char school_name[] = "UCAS";
    int year = 2025;
    char eye_color[] = "Brown";
    int age = 14;
    char favorite_subject[] = "Math";
    double long_pi = 3.141592653;

    printf("Name: %s\n", name);
    printf("Number (1-10): %d\n", number);
    printf("GPA: %.2f\n", gpa);
    printf("Breakfast: %s\n", breakfast);
    printf("Favorite Color: %s\n", favorite_color);
    printf("School Name: %s\n", school_name);
    printf("Year: %d\n", year);
    printf("Eye Color: %s\n", eye_color);
    printf("Age: %d\n", age);
    printf("Favorite Subject: %s\n", favorite_subject);
    printf("Long Pi: %.9f\n", long_pi);

    return 0;
}