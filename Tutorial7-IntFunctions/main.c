#include <stdio.h>
#include <stdlib.h>


double cube(double num)
{
    double result = num * num * num;
    return result;
}

int max(int num1, int num2)
/* Returns max number*/
{
    int result;

    if(num1>num2)
        {
        result = num1;
        }
    else {
        result = num2;
        }

    return result;
}


int max2(int num1, int num2, int num3)
/* Returns max number*/
{
    int result;

    if(num1 >= num2 && num1 >= num3)
        {
        result = num1;
        }
    else if (num2 >= num1 && num2 >= num3){
        result = num2;
        }
    else {result = num3;}

    return result;
}



int main()
{
    if(2 > 3 || 5 > 2 || 4!= 2 || 2==3){
        printf("This Statement is true! \n");
    }else{printf("This Statement is False! \n");}

    if(!(3 > 2)){ //Negation operator
        printf("This Statement is true! \n");
    } else{printf("This Statement is False! \n");}

    printf(" max number %d \n", max(6,5));
    printf(" max2 number %d \n", max2(6,5,9));


    double val;
    printf("Input a Value:");
    scanf("%lf", &val);
    printf("\nCube value %f \n", val);
    printf(" Answer: %f", cube(val));
    return 0;
}

