//SN 6th Time of Day Practice
#include <stdio.h>
#include <string.h>

int main(void){
    int time;
    char name[1001];
    printf("What is the time in military form without colons??: ");
    scanf("%d", &time);

        if (time <= 1159) {
        printf("Good morning!\n");
     } else if (time >= 1200) {
        printf("Good afternoon!\n");
    } else if (time >= 1800 ) {
        printf("Good evening!\n");  
    } else if (time >= 2100 ) {
        printf("Good night!\n");
    } else {
        printf("Please enter a real time.\n");
    }


    return 0; 
}

