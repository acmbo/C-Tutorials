#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* Variable and Constants*/

    int num = 5; //modifyble Value
    const int num_const =10; //non modifyble value
    num = 10;
    printf("The variable has value %d and the constant has value %d \n",num,num_const);

    /* Getting User information*/
    int stor_val; // variable without value
    printf("Enter your age:");
    scanf("%d", &stor_val); //Tell C what format the varibale comes and you use pointer to the variable
    printf("You are %d old \n", stor_val);

    double gpa; // variable without value
    printf("Enter your gpa:");
    scanf("%lf", &gpa); //Tell C what format the varibale comes and you use pointer to the variable
    printf("Youre Gpa is %f \n", gpa);

    char name[20]; // You have to define how many characters(len) have to be allocated to the array
    printf("Enter your name:");
    scanf("%s", &name); //Leerzeichen werden nur bis zum ersten Space gespeichert!
    printf("You are %s \n", name);

    /* Only works without the lines above*/
    char adress[20]; // You have to define how many characters(len) have to be allocated to the array
    printf("Enter your adress: \n");
    fgets(adress, 20, stdin); // funktion mit variable,länge des Einzugeben Arrays, "standard input'
    printf("Your adress is %s", adress);



    return 0;
}
