#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[25];
    char celebFir[25];
    char celebLa[25];
    char pluraNoun[25];

    printf("Enter a color: ");
    scanf("%s", color); //For String you dont need a Pointer!
    printf("Enter a pluraNoun: ");
    scanf("%s", pluraNoun);
    printf("Enter a celebratiy: ");
    scanf("%s%s", celebFir, celebLa);


    printf("Roses are %s\n", color);
    printf("%s are blue \n", pluraNoun);
    printf("I love %s %s\n", celebFir, celebLa);
    return 0;
}
