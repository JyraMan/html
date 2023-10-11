#include <stdio.h>
#include "courcework.h"
#include <string.h>
#include <ctype.h>

int main()
{
    float value;
    char units[10];
    char choice;

    extern float result;

    printf("\n\n\n");

    const char *letters[] = {
        "##  ##  ##  ##  ######  ######",
        "##  ##  ### ##    ##      ##",
        "##  ##  ## ###    ##      ##",
        "##  ##  ##  ##    ##      ##",
        " ####   ##  ##  ######    ##",
        "                                                              \n"
        " ####    ####   ##  ##  ##  ##  #####   ##  ##  ######  #####   #####",
        "##  ##  ##  ##  ### ##  ##  ##  ##      ### ##    ##    ##      ##  ##",
        "##      ##  ##  ## ###  ##  ##  ####    #  ###    ##    ####    #####",
        "## #    ##  ##  ##  ##   ####   ##      ##  ##    ##    ##      ##  ##",
        " ####    ####   ##  ##    ##    #####   ##  ##    ##    #####   ##  ##"

    };
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("%s\n", letters[i]);
    }
    printf("\n\n\n");
    printf("-------------|-------------|-----------------|------------|------------|\n");
    printf("|-------------|------------|  CONVERSION IN  |------------|------------|\n");
    printf("-------------|-------------|-----------------|------------|------------|\n");
    printf("| %10s | %10s | %15s | %10s | %10s |\n", "Milimeters", "Centimeters", "Decimeters", "Meters", "Kilometers");
    printf("-------------|-------------|-----------------|------------|------------|\n");
    printf("|-------------|------------|  CONVERSION TO  |------------|------------|\n");
    printf("-------------|-------------|-----------------|------------|------------|\n");
    printf("| %10s | %10s | %15s | %10s | %10s | \n", "Centimeters", "Milimeters", "Milimeters", "Milimeters", "Milimeters");
    printf("-------------|-------------|-----------------|------------|------------|\n");
    printf("| %10s  | %10s | %15s | %10s| %10s|\n", "Decimeters", "Decimeters", "Centimeters", "Centimeters", "Centimeters");
    printf("-------------|-------------|-----------------|------------|------------|\n");
    printf("| %10s  | %10s | %15s | %10s | %10s |\n", "Meters", "Meters", "Meters", "Decimeters", "Decimeters");
    printf("-------------|-------------|-----------------|------------|------------|\n");
    printf("| %10s  | %10s | %15s | %10s | %10s |\n", "Kilometers", "Kilometers", "Kilometers", "Kilometers", "Meters");
    printf("-------------|-------------|-----------------|------------|------------|\n");
    printf("\n\n\n");

    printf("-------------|-----------------|------------|\n");
    printf("|------------|  CONVERSION IN  |------------|\n");
    printf("-------------|-----------------|------------|\n");
    printf("| %6s    |      %10s |     %6s |\n", "Celsius", "Fahrenheit", "Kelvin");
    printf("-------------|-----------------|------------|\n");
    printf("|------------|  CONVERSION TO  |------------|\n");
    printf("---------------|-------------|--------------|\n");
    printf("| %6s   | %6s        %6s      |\n", "Fahrenheit", "Kelvin", "Celsius");
    printf("---------------|-------------|--------------|\n");
    printf("| %6s       | %6s       %6s   |\n", "Kelvin", "Fahrenheit", "Celsius");
    printf("---------------|-------------|--------------|\n");
    printf("\n\n\n");

    printf("----------------|-----------------|--------------|\n");
    printf("|---------------|  CONVERSION IN  |--------------|\n");
    printf("----------------|-----------------|--------------|\n");
    printf("| %6s        |     %10s  |%6s |\n", "Grams", "Kilograms", "Hundredweight");
    printf("----------------|-----------------|--------------|\n");
    printf("|---------------|  CONVERSION TO  |--------------|\n");
    printf("----------------|-----------------|--------------|\n");
    printf("| %6s     | %6s          | %6s       |\n", "Kilograms", "Grams", "Grams");
    printf("----------------|-----------------|--------------|\n");
    printf("| %6s | %6s   |    %6s |\n", "Hundredweight", "Hundredweight", "Kilograms");
    printf("----------------|-----------------|--------------|\n");
    printf("\n\n\n");

    printf("\n\n\n");
    printf("-------------|-------------|-----------------|------------|------------|------------|\n");
    printf("|------------|-------------|  CONVERSION IN  |------------|------------|------------|\n");
    printf("-------------|-------------|-----------------|------------|------------|------------|\n");
    printf("| %10s | %10s  | %15s | %10s | %10s | %10s |\n", "Seconds", "Minutes", "Hours", "Days", "Months", "Years");
    printf("-------------|-------------|-----------------|------------|------------|------------|\n");
    printf("|------------|-------------|  CONVERSION TO  |------------|------------|------------|\n");
    printf("-------------|-------------|-----------------|------------|------------|------------|\n");
    printf("| %10s | %10s  | %15s | %10s | %10s | %10s | \n", "Minutess", "Seconds", "Seconds", "Seconds", "Seconds", "Seconds");
    printf("-------------|-------------|-----------------|------------|------------|------------|\n");
    printf("| %10s |  %10s | %15s | %10s | %10s | %10s |\n", "Hours", "Hours", "Minutes", "Minutes", "Minutes", "Minutes");
    printf("-------------|-------------|-----------------|------------|------------|------------|\n");
    printf("| %10s |  %10s | %15s | %10s | %10s | %10s |\n", "Days", "Days", "Days", "Hours", "Hours", "Hours");
    printf("-------------|-------------|-----------------|------------|------------|------------|\n");
    printf("| %10s |  %10s | %15s | %10s | %10s | %10s |\n", "Months", "Months", "Months", "Months", "Days", "Days");
    printf("-------------|-------------|-----------------|------------|------------|------------|\n");
    printf("| %10s |  %10s | %15s | %10s | %10s | %10s |\n", "Years", "Years", "Years", "Years", "Years", "Months");
    printf("-------------|-------------|-----------------|------------|------------|------------|\n");
    printf("\n\n\n");

    printf("+---------------------------+\n");
    printf("| Enter a value:|         ");
    scanf("%f", &value);
    printf("+---------------------------+\n");
    printf("\n\n");

    if (value != (int)value)
    {
        printf("+--------------------------------+\n");
        printf("|input error: not a numeric value|\n");
        printf("+--------------------------------+\n");
        return 0;
    }

    printf("+---------------------------+\n");
    printf("| Enter a unit:|          ");
    scanf(" %s", units);
    printf("+---------------------------+\n");
    printf("\n\n");

    int P = 0;
    while (units[P] != '\0')
    {
        if (isdigit(units[P]))
        {
            printf("+------------------------------------+\n");
            printf("|input error: incorrect value entered|\n");
            printf("+------------------------------------+\n");
            return 1;
        }
        P++;
    }

    int isValidUnit = 0;
    while (!isValidUnit)
    {
        // определяем, какую единицу измерения ввели с клавиатуры(В ДАННОМ СЛУЧАЕ САНТИМЕТРЫ!!)
        if (strcmp(units, "cm") == 0)
        {

            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| Option |     | Conversion |\n");
            printf("+---------------------------+\n");
            printf("| a) |            | CM to M |\n");
            printf("+---------------------------+\n");
            printf("| b) |           | CM to MM |\n");
            printf("+---------------------------+\n");
            printf("| c) |           | CM to KM |\n");
            printf("+---------------------------+\n");
            printf("| d) |           | CM to DC |\n");
            printf("+---------------------------+\n");

            printf("\n\n");
            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &choice);
            printf("+---------------------------+\n");
            convertSM(value, choice);
            printf("\n\n");
            if (choice == "a") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Seconds is equal to %.3f Minutes. \n", value, result);
                printf("+-----------------------------------------------------------+\n"); 
            }
            else if (choice == "b") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f centimeters is equal to %.2f millimeters. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
            }
            else if (choice == "c") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f centimeters is equal to %.5f kilometers. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
            }
            else if (choice == "d") {
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f centimeters is equal to %.2f decimeter. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
            }
            else {
                printf("| Invalid choice. |\n");
            }
             isValidUnit = 1;
        }

        // определяем, какую единицу измерения ввели с клавиатуры(В ДДАННОМ СЛУЧАЕ МЕТРЫ!!)
        else if (strcmp(units, "m") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| Option |     | Conversion |\n");
            printf("+---------------------------+\n");
            printf("| a) |            | M to CM |\n");
            printf("+---------------------------+\n");
            printf("| b) |            | M to KM |\n");
            printf("+---------------------------+\n");
            printf("| c) |            | M to Ml |\n");
            printf("+---------------------------+\n");
            printf("| d) |            | M to Ft |\n");
            printf("+---------------------------+\n");
            printf("\n\n");
            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &choice);
            printf("+---------------------------+\n");
            convertationM(value, choice);
            printf("\n\n");
             if (choice == "a") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f meters is equal to %.2f centimeters. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
             }
             else if (choice == "b") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f meters is equal to %.3f kilometers. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
             }
             else if (choice == "c") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f meters is equal to %.5f miles. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
             }
             else if (choice == "d") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f meters is equal to %.2f foot. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
             }
             else {
                printf("| Invalid choice. |\n");
             }
             isValidUnit = 1;
        }
        // определяем, какую единицу измерения ввели с клавиатуры (В ДАННОМ СЛУЧАЕ МИЛЛИМЕТРЫ)
        else if (strcmp(units, "mm") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |            | MM to CM  |\n");
            printf("+---------------------------+\n");
            printf("| b) |            | MM to M  |\n");
            printf("+---------------------------+\n");
            printf("| c) |            | MM to KM  |\n");
            printf("+---------------------------+\n");
            printf("| d) |            | MM to PD  |\n");
            printf("+---------------------------+\n");

            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &choice);
            printf("+---------------------------+\n");
            convertMM(value, choice);
            if (choice == "a") {
                 printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Millimeters is equal to %.2f Centimeters. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
            }
            else if (choice == "b") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Millimeters is equal to %.2f Meters. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
            }
            else if (choice == "b") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Millimeters is equal to %.2f Kilometers. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
            }
            else if (choice == "b") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Millimeters is equal to %.5f Pouns. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
            }
            else {
                printf("| Invalid choice. |\n");
            }
            isValidUnit = 1;
        }
        // определяем, какую единицу измерения ввели с клавиатуры (В ДАННОМ СЛУЧАЕ ЦЕЛЬСИЯ)
        else if (strcmp(units, "c") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |            | C to F  |\n");
            printf("+---------------------------+\n");
            printf("| b) |            | C to K  |\n");
            printf("+---------------------------+\n");

            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &choice);
            printf("+---------------------------+\n");
            convertC(value, choice);
            if (choice == "a") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Celsius is equal to %.2f Fahrenheit. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
            }
            else if (choice == "b") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Celsius is equal to %.2f Kelvins. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
            }
            else {
                 printf("| Invalid choice. |\n");
                 isValidUnit = 1;
            }
        }
        // определяем, какую единицу измерения ввели с клавиатуры (В ДАННОМ СЛУЧАЕ КЕЛЬВИНЫ)
        else if (strcmp(units, "k") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |            | K to F  |\n");
            printf("+---------------------------+\n");
            printf("| b) |            | K to C  |\n");
            printf("+---------------------------+\n");

            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &choice);
            printf("+---------------------------+\n");
            convertK(value, choice);
             if (choice == "a") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f kelvin is equal to %.2f Fahrenheit. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
             }
             else if (choice == "b") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f kelvin is equal to %.2f Celsius. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
             }
             else {
                printf("| Invalid choice. |\n");
             }
             isValidUnit = 1;
        }

        // орпеделяем, какую еединцу измерения ввели с клавиатуры (В ДАННОМ СЛУЧАЕ ФАРЕНГЕЙТЫ)
        else if (strcmp(units, "f") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |            | F to K  |\n");
            printf("+---------------------------+\n");
            printf("| b) |            | F to C  |\n");
            printf("+---------------------------+\n");

            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &choice);
            printf("+---------------------------+\n");
            convertF(value, choice);
            if (choice == "a") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Fahrenheit is equal to %.2f Kelvin. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
            }
            else if (choice == "b") {
                 printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Fahrenheit is equal to %.2f Celsius. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
            }
            else {
                printf("| Invalid choice. |\n");
            }
            isValidUnit = 1;
        }
        // определяем, какую единицу измерения ввели с клавиатуры (В ДАННОМ СЛУЧАЕ КИЛОГРАММЫ)
        else if (strcmp(units, "kg") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |            | KG to GR  |\n");
            printf("+---------------------------+\n");
            printf("| b) |            | KG to PD  |\n");
            printf("+---------------------------+\n");
            printf("| c) |            | KG to MG  |\n");
            printf("+---------------------------+\n");
            printf("| d) |            | KG to CR  |\n");
            printf("+---------------------------+\n");
           

            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &choice);
            printf("+---------------------------+\n");
            convertKG(value, choice);
            isValidUnit = 1;
        }

        // определяем, какую единицу измерения ввели с клавиатуры (В ДАННОМ СЛУЧАЕ ГРАММЫ)
        else if (strcmp(units, "gr") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |            | GR to KG  |\n");
            printf("+---------------------------+\n");
            printf("| b) |            | GR to MG  |\n");
            printf("+---------------------------+\n");
            printf("| b) |            | GR to PD  |\n");
            printf("+---------------------------+\n");
            printf("| d) |            | GR to CR  |\n");
            printf("+---------------------------+\n");
            printf("| e) |            | GR to TN  |\n");
            printf("+---------------------------+\n");

            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &choice);
            printf("+---------------------------+\n");
            convertGR(value, choice);
            isValidUnit = 1;
        }

        // определяем, какую единицу измеерения ввеели с клавиатуры ( В ДАННОМ СЛУЧАЕ ЦЕНТНЕРЫ)
        else if (strcmp(units, "hw") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |            | HW to GR  |\n");
            printf("+---------------------------+\n");
            printf("| b) |            | HW to KG  |\n");
            printf("+---------------------------+\n");
            printf("| c) |            | HW to TN  |\n");
            printf("+---------------------------+\n");
            printf("| d) |            | HW to PD  |\n");
            printf("+---------------------------+\n");

            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &choice);
            printf("+---------------------------+\n");
            convertHW(value, choice);
            isValidUnit = 1;
        }
        // определяем, какую единицу измерения ввели с клавиатуры (В ДАННОМ СЛУЧАЕ СЕКУНДЫ)
        else if (strcmp(units, "sec") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |           | SEC to MIN   |\n");
            printf("+---------------------------+\n");
            printf("| b) |           | SEC to HOUR  |\n");
            printf("+---------------------------+\n");
            printf("| c) |           | SEC to DAYS  |\n");
            printf("+---------------------------+\n");
            printf("| d) |           | SEC to MONTHS  |\n");
            printf("+---------------------------+\n");
            printf("| e) |           | SEC to YEAR  |\n");
            printf("+---------------------------+\n");

            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &choice);
            printf("+---------------------------+\n");
            convertSEC(value, choice);
            isValidUnit = 1;
        }

        // определяем, какую единицу измерения ввели  клавиатуры (в данном случае минуты)
        else if (strcmp(units, "min") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |           | MIN to SEC   |\n");
            printf("+---------------------------+\n");
            printf("| b) |           | MIN to HOURS |\n");
            printf("+---------------------------+\n");
            printf("| c) |           | MIN to DAYS  |\n");
            printf("+---------------------------+\n");
            printf("| d) |           | MIN to MONTHS |\n");
            printf("+---------------------------+\n");
            printf("| e) |           | MIN to YEARS |\n");
            printf("+---------------------------+\n");

            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &choice);
            printf("+---------------------------+\n");
            convertMIN(value, choice);
            isValidUnit = 1;
        }
        // определяем, какую единицу измерения ввели с клавиатуры ( в данном случае часы)
        else if (strcmp(units, "hour") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |           | HOURS to SEC  |\n");
            printf("+---------------------------+\n");
            printf("| b) |           | HOURS to MIN  |\n");
            printf("+---------------------------+\n");
            printf("| c) |           | HOURS to DAYS |\n");
            printf("+---------------------------+\n");
            printf("| d) |           | HOURS to MONTHS |\n");
            printf("+---------------------------+\n");
            printf("| e) |           | HOURS to YEARS |\n");
            printf("+---------------------------+\n");

            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &choice);
            printf("+---------------------------+\n");
            convertHOUR(value, choice);
            isValidUnit = 1;
        }

        // определяем, какую единицу измерения ввели с клавиатуры (в дданном случае дни)
        else if (strcmp(units, "day") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |           | DAYS to SEC  |\n");
            printf("+---------------------------+\n");
            printf("| b) |           | DAYS to MIN  |\n");
            printf("+---------------------------+\n");
            printf("| c) |           | DAYS to HOURS  |\n");
            printf("+---------------------------+\n");
            printf("| d) |           | DAYS to MONTHS |\n");
            printf("+---------------------------+\n");
            printf("| e) |           | DAYS to YEARS |\n");
            printf("+---------------------------+\n");

            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &choice);
            printf("+---------------------------+\n");
            convertDAY(value, choice);
            if (choice == "a") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Days is equal to %.2f Seconds. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
            }
            else if (choice == "b") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Days is equal to %.2f Minutes. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
            }
            else if (choice == "c") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Days is equal to %.2f Hours. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
            }
            else if (choice == "d") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Days is equal to %.3f Months. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
            }
            else if (choice == "e") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Days is equal to %.4f Years. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
            }
            else {
                printf("| Invalid choice. |\n");
            }
            
            isValidUnit = 1;
        }
        // определяем, какую единицу измерения ввели с клавиатуры (в данном случае месяца)
        else if (strcmp(units, "month") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |           | MONTHS to SEC  |\n");
            printf("+---------------------------+\n");
            printf("| b) |           | MONTHS to MIN  |\n");
            printf("+---------------------------+\n");
            printf("| c) |           | MONTHS to HOURS |\n");
            printf("+---------------------------+\n");
            printf("| c) |           | MONTHS to DAYS  |\n");
            printf("+---------------------------+\n");
            printf("| e) |           | MONTHS to YEARS |\n");
            printf("+---------------------------+\n");

            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &choice);
            printf("+---------------------------+\n");
            convertMONTH(value, choice);
            if (choice == "a") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Months is equal to %.7f Seconds. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
            }
            else if (choice == "b") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Months is equal to %.6f Minutes. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
            }
            else if (choice == "c") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Months is equal to %.2f Days. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
            }
            else if (choice == "d") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Months is equal to %.2f Days. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
            }
            else if (choice == "e") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Months is equal to %.2f Years. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
            }
            else {
                printf("| Invalid choice. |\n");
            }
            isValidUnit = 1;
        }
        // определяем с клавиатуры, какую единицу измерения ввели (в данном случае года)
        else if (strcmp(units, "year") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |           | YEARS to SEC  |\n");
            printf("+---------------------------+\n");
            printf("| b) |           | YEARS to MIN  |\n");
            printf("+---------------------------+\n");
            printf("| c) |           | YEARS to HOURS |\n");
            printf("+---------------------------+\n");
            printf("| c) |           | YEARS to DAYS  |\n");
            printf("+---------------------------+\n");
            printf("| e) |           | YEARS to MONTHS |\n");
            printf("+---------------------------+\n");

            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &choice);
            printf("+---------------------------+\n");
            convertYEAR(value, choice);
            if (choice == "a") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Years is equal to %.8f Seconds. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
            }
            else if (choice == "b") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Years is equal to %.7f Minutes. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
            }
            else if (choice == "c") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Years is equal to %.4f Hours. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
            }
            else if (choice == "d") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Years is equal to %.3f Days. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
            }
            else if (choice == "e") {
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Years is equal to %.2f Months. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
            }
            else {
                printf("| Invalid choice. |\n");
            }
            isValidUnit = 1;
        }
        else
        {
            printf("+---------------------------+\n");
            printf("|      Invalid category.    |\n");
            printf("+---------------------------+\n");
            isValidUnit = 1;
        }
    }

    return 0;
}