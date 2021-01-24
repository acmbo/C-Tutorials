#include <stdio.h>
#include <stdlib.h>


void sayHi(); // If you are writing functions after main, the function has to be declared first or write function first
void sayHi2(char name[]);
int main()
{
    /*Arrays*/

    printf("Simple Array \n");
    int luckNumbers[] = {1,2,5,6,8,9};
    luckNumbers[0] = 10;
    printf("%d", luckNumbers[0]); // Acces Entry with Index 0

    printf("\n Second Array \n");
    double secNumbers[10];
    secNumbers[0] = 1;
    printf("%d \n", secNumbers[0]);
    printf("%d \n", secNumbers[1]); //Values are not availbe
    printf("%d \n", secNumbers[2]); //Values are not availbe

    printf("\n\n");
    sayHi();

    printf("\n\n");
    sayHi2("Mike");

    return 0;
}

void sayHi(){ //Void means, Function wont return a value
    printf("Hello User");
}


void sayHi2(char name[]){ //Void means, Function wont return a value
    printf("Hello User %s", name);
}
