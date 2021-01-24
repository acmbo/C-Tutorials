#include <stdio.h>
#include <stdlib.h>
#include <cstring> sh

int main()
{
    char CHAR; //storage one char
    char CHARS[] = "Mario"; // Storage of multiple Characters
    char GAME[] = "Mario World";
    int CHAR_AGE  = 30;
    char *CHAR_2 = (char*)malloc(256); // Reserviert Speicher vor
    strcpy(CHAR_2,"Mario");


    printf("Hello, im %s. Im the best Charakter in %s. \n",CHARS,GAME); // percent s will insert string
    printf("Im %d years old.\n", CHAR_AGE); // percent d means number will insertet
    printf("Hello world! %s\n",CHAR_2);

    strcpy(CHAR_2,"Luigi");

    printf("Hey, im %s. Im his Brother.\n",CHAR_2);
    free(CHAR_2);

    printf("Hey, im %s. Im his Brother. Im freed().\n",CHAR_2);
    return 0;
}
