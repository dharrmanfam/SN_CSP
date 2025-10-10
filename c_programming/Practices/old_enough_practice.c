//SN 6th Old Enough Practice
#include<stdio.h>
#include<stirng.h>

int main(void){
    int age;
    printf("What is your age?\n");
    scanf("%d", &age);

    if (age >= 18){
        printf("You are old enough to vote!\n");
    }
    else if (age >=16){
        printf("You are old enough to get drive!\n");
    }
    else if (age >= 15){
        printf("You are old enough to get a learner's permit!\n");
    }
    else if (age < 15){}
        printf("Go to school bud\n");
    


    
    
    
    
    
    
    
    return 0;
}