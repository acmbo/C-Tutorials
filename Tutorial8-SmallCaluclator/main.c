#include <stdio.h>
#include <stdlib.h>

int switchdemo(char grade){
    char result[10];

    switch(grade){
    case 'A' :
        printf("You did exceptional \n");
        break;
    case 'B':
        printf("You did good\n");
        break;
    case 'C':
        printf("You did good\n");
        break;
    default:
        printf("Wrong Input\n");
    }
}

int main()
{
    switchdemo('A');

    /*Calulator*/
    double num1;
    double num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op); //Space before c is important!
    printf("Enter a number: ");
    scanf("%lf", &num2);

    if(op == '+'){
        printf("%f", num1 + num2);
    } else if(op == '-'){
        printf("%f", num1 - num2);
    } else if(op == '*'){
        printf("%f", num1 * num2);
    } else if(op == '/'){
        printf("%f", num1 / num2);
    } else {
        printf("Invalid Operator");
    }


    return 0;
}
