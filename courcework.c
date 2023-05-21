//реализация наших функций
#include <stdio.h>
#include "courcework.h"
// void convertLength(float value, char choice) {
//         switch (choice) {
//         case 'a':

//         printf("\n\n");
//         printf("+-----------------------------------------------------------+\n");
//         printf("| Your answer is: %.2f centimeters is equal to %.2f meters. \n", value, value / 100);
//         printf("+-----------------------------------------------------------+\n");
//         break;
//         case 'b':
//         printf("\n\n");
//         printf("+-----------------------------------------------------------+\n");
//         printf("| Your answer is: %.2f meters is equal to %.2f centimeters. \n", value, value * 100);
//         printf("+-----------------------------------------------------------+\n");
//         break;
//         case 'c':
//         printf("\n\n");
//         printf("+-----------------------------------------------------------+\n");
//         printf("| Your answer is: %.2f centimeters is equal to %.2le kilometers. ", value, value / 100000);
//         printf("+-----------------------------------------------------------+\n");
//         break;
//         case 'd':
//         printf("+-----------------------------------------------------------+\n");
//         printf("| Your answer is: %.2f kilometers is equal to %.2f centimeters. \n", value, value * 100000);
//         printf("+-----------------------------------------------------------+\n");
//         break;

//         // Добавить здесь другие варианты конвертации длины потом
//         default:
//         printf("| Invalid choice. |\n");
//         break;
//         }
//         }

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
        printf("\n\n");
        printf("+-----------------------------------------------------------+\n");
        printf(" | Your answer is: %.2f Celsius is equal to %.2f Kelvins. \n", value, value + 273);
        printf("+-----------------------------------------------------------+\n");
        break;
        case 'd':
        printf("\n\n");
        printf("+-----------------------------------------------------------+\n");
        printf(" | Your answer is: %.2f Kelvins is equal to %.2f Celsius. \n", value, value - 273);
        printf("+-----------------------------------------------------------+\n");

        // Добавить здесь другие варианты конвертации температуры потом
        default:
        printf("Invalid choice.\n");
        break;
        }
        }
    
     // Функция для конвертации веса
    void convertWeight(float value, char choice) {
        switch (choice) {
        case 'a':
        printf("\n\n");
        printf("+-----------------------------------------------------------+\n");
        printf(" | Your answer is: %.2f Grams is equal to %.2f Kilograms. \n", value, value / 1000 );
        printf("+-----------------------------------------------------------+\n");
        break;
        case 'b':
        printf("\n\n");
        printf("+------------------------------------------------------------+\n");
        printf(" | Your answer is: %.2f Kilograms is equal to %.2f Grams. \n", value, value * 1000) ;
        printf("+------------------------------------------------------------+\n");
        break;
        case 'c':
        printf("\n\n");
        printf("+-----------------------------------------------------------+\n");
        printf(" | Your answer is: %.2f Hundredweight is equal to %.2f Kilograms. \n", value, value * 100);
        printf("+-----------------------------------------------------------+\n");
        break;
        case 'd':
        printf("\n\n");
        printf("+-----------------------------------------------------------+\n");
        printf(" | Your answer is: %.2f Kilograms is equal to %.2f Hundredweight. \n", value, value / 100);
        printf("+-----------------------------------------------------------+\n");

        // Добавить здесь другие варианты конвертации температуры потом
        default:
        printf("Invalid choice.\n");
        break;
        }

}