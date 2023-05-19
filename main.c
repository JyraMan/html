#include <stdio.h>
#include "courcework.h"
int main() {
float value;
char choice;
char category;

printf("\n\n");

printf("********************************\n");
printf("\n");
printf("*********UNIT_CONVENTER*********\n");
printf("\n");
printf("********************************\n");
printf("\n\n");

printf("+---------------------------+\n");
printf("| Enter a value:|         ");
scanf("%f", &value);
printf("+---------------------------+\n");
printf("\n\n");


printf("|      Choose category:     |\n");
printf("+---------------------------+\n");
printf("| Option |     | Conversion |\n");
printf("+---------------------------+\n");
printf("|  a)  |           | Length |\n");
printf("+---------------------------+\n");
printf("|  b)  |      | Temperature |\n");
printf("+---------------------------+\n");
printf("|  c)  |      |   Weight    |\n");
printf("+---------------------------+\n");
printf("| Enter a choise:|         ");
scanf(" %c", &category);
printf("+---------------------------+\n");
printf("\n\n");


switch (category) {

    case 'a':
    printf("|    Choose conversion:     |\n");
    printf("+---------------------------+\n");
    printf("| Option |     | Conversion |\n");
    printf("+---------------------------+\n");
    printf("| a) |            | CM to M |\n");
    printf("+---------------------------+\n");
    printf("| b) |            | M to CM |\n");
    printf("+---------------------------+\n");
    printf("| c) |           | CM to KM |\n");
    printf("+---------------------------+\n");
    printf("| d) |           | KM to CM |\n");
    printf("+---------------------------+\n");

    printf("| Enter a choise:|         ");
    scanf(" %c", &choice);
    printf("+---------------------------+\n");
    convertLength(value, choice);
    printf("\n\n");
    break;
case 'b':
    printf("|    Choose conversion:     |\n");
    printf("+---------------------------+\n");
    printf("| a) |            | C to F  |\n");
    printf("+---------------------------+\n");
    printf("| b) |            | F to C  |\n");
    printf("+---------------------------+\n");
    printf("| c) |            | C to K  |\n");
    printf("+---------------------------+\n");
    printf("| d) |            | K to C |\n");
    printf("+---------------------------+\n");
    printf("| Enter a choise:|         ");
scanf(" %c", &choice);
    printf("+---------------------------+\n");
convertTemperature(value, choice);
printf("\n\n");
break;
case 'c':
      printf("|             Choose conversion:             |\n");
    printf("+----------------------------------------------+\n");
    printf("| a) |            | Grams to Kilograms  |       \n");
    printf("+----------------------------------------------+\n");
    printf("| b) |            | Kilograms to Grams  |       \n");
    printf("+----------------------------------------------+\n");
    printf("| c) |        | Hundredweight to Kilograms |   \n" );
    printf("+----------------------------------------------+\n");
    printf("| d) |        | Kilograms to Hundredweight |    \n");
    printf("+----------------------------------------------+\n");
    printf("                  | Enter a choise:|              ");
scanf(" %c", &choice);
    printf("+----------------------------------------------+\n");
convertWeight(value, choice);
printf("\n\n");
break;
default:
printf("+---------------------------+\n");
printf("|      Invalid category.    |\n");
printf("+---------------------------+\n");
break;
}
return 0;
}
