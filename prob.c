     #include <stdio.h>

        // Функции для конвертации длины
        void convertLength(float value, char choice) {
        switch (choice) {
        case 'a':

        printf("\n\n");
        printf("+-----------------------------------------------------------+\n");
        printf("| Your answer is: %.2f centimeters is equal to %.2f meters. \n", value, value / 100);
        printf("+-----------------------------------------------------------+\n");
        break;
        case 'b':
        printf("\n\n");
        printf("+-----------------------------------------------------------+\n");
        printf("| Your answer is: %.2f meters is equal to %.2f centimeters. \n", value, value * 100);
        printf("+-----------------------------------------------------------+\n");
        break;
        case 'c':
        printf("\n\n");
        printf("+-----------------------------------------------------------+\n");
        printf("| Your answer is: %.2f centimeters is equal to %.2le kilometers. ", value, value / 100000);
        printf("+-----------------------------------------------------------+\n");
        break;
        case 'd':
        printf("+-----------------------------------------------------------+\n");
        printf("| Your answer is: %.2f kilometers is equal to %.2f centimeters. \n", value, value * 100000);
        printf("+-----------------------------------------------------------+\n");
        break;

        // Добавить здесь другие варианты конвертации длины потом
        default:
        printf("| Invalid choice. |\n");
        break;
        }
        }

        // Функции для конвертации температуры
        void convertTemperature(float value, char choice) {
        switch (choice) {
        case 'a':
        printf("\n\n");
        printf("+-----------------------------------------------------------+\n");
        printf(" | Your answer is: %.2f Celsius is equal to %.2f Fahrenheit. \n", value, (value * 9 / 5) + 32);
        printf("+-----------------------------------------------------------+\n");
        break;
        case 'b':
        printf("\n\n");
        printf("+------------------------------------------------------------+\n");
        printf(" | Your answer is: %.2f Fahrenheit is equal to %.2f Celsius. \n", value, (value - 32) * 5 / 9);
        printf("+------------------------------------------------------------+\n");
        break;
        case 'c':
         printf("+-----------------------------------------------------------+\n");
        printf(" | Your answer is: %.2f Celsius is equal to %.2f Kelvins. \n", value, value + 273);
        printf("+-----------------------------------------------------------+\n");
        printf("\n\n");

        // Добавить здесь другие варианты конвертации температуры потом
        default:
        printf("Invalid choice.\n");
        break;
        }

}
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
    printf("| Enter a choise:|         ");
scanf(" %c", &choice);
    printf("+---------------------------+\n");
convertTemperature(value, choice);
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
