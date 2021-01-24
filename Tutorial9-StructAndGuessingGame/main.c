#include <stdio.h>
#include <stdlib.h>
#include <cstring>
/*Using Structs*/

struct Student{
    char name[50];
    char major [50];
    int age;
    double gpa;
};

void GuessingGame(){

    /* Little Guessing Game*/

    int secretNumber = 5;
    int guess;
    int guesscount = 0;
    int guesslimit =6;
    int outofguess = 0;

    while(guess != secretNumber && outofguess == 0){

        if (guesscount < guesslimit){
            printf("Enter a number:");
            scanf("%d", &guess);
            guesscount++;
        }else{
            outofguess =1;

        }


    }




    switch(outofguess){
    case 0:
        printf("You Win!");
        break;
    case 1:
        printf("Youre out of guesses");
        break;
    }


};

int main()
{
    struct Student student1;
    strcpy(student1.name, "Mikel Com");//Because it is an array you have the stringcopy functin to add Values into name
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.major, "Buisness");

    struct Student student2;
    strcpy(student2.name, "Jenet");//Because it is an array you have the stringcopy functin to add Values into name
    student2.age = 18;
    student2.gpa = 1.2;
    strcpy(student2.major, "art");

    printf("%s \n", student2.name);



    /*While Loops*/

    int index = 1;

    while(index <= 5) {
        printf("%d \n", index);
        index ++; // index = index +1
    }


    index = 1;

     do {  //Checks Condition last

        printf("%d \n", index);
        index ++; // index = index +1

    }while(index <= 5);

    GuessingGame();

    return 0;
}
