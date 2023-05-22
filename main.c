#include <stdio.h>
#include "courcework.h"
#include <string.h>
int main() {
        float value;
        char units[3];
        char choice;

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
        printf("+---------------------------+\n");
        printf("| Enter a unit:|     ");
        scanf("%2s", units);
        printf("+---------------------------+\n");
        printf("\n\n");


    int isValidUnit = 0;
        while (!isValidUnit)
        {
            //определяем, какую единицу измерения ввели с клавиатуры(В ДДАННОМ СЛУЧАЕ САНТИМЕТРЫ!!)
            if (strcmp(units, "cm") == 0){
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
            isValidUnit = 1;

            }


            //определяем, какую единицу измерения ввели с клавиатуры(В ДДАННОМ СЛУЧАЕ МЕТРЫ!!)
            else if (strcmp(units, "m") == 0) {
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
            isValidUnit = 1;
            }
            //определяем, какую единицу измерения ввели с клавиатуры (В ДАННОМ СЛУЧАЕ МИЛЛИМЕТРЫ)
            else if(strcmp(units, "mm") == 0) {
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
            isValidUnit = 1;

            }
	    //определяем, какую единицу измерения ввели с клавиатуры (В ДАННОМ СЛУЧАЕ ЦЕЛЬСИЯ)
            else if(strcmp(units, "c") == 0) {
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
            isValidUnit = 1;

            }
            //определяем, какую единицу измерения ввели с клавиатуры (В ДАННОМ СЛУЧАЕ КЕЛЬВИНЫ)
            else if(strcmp(units, "k") == 0) {
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
            isValidUnit = 1;

            }

	    //орпеделяем, какую еединцу измерения ввели с клавиатуры (В ДАННОМ СЛУЧАЕ ФАРЕНГЕЙТЫ)
	    else if(strcmp(units, "f") == 0) {
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
            isValidUnit = 1;

            }
            //определяем, какую единицу измерения ввели с клавиатуры (В ДАННОМ СЛУЧАЕ КИЛОГРАММЫ)
            else if(strcmp(units, "kg") == 0) {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |            | KG to GR  |\n");
            printf("+---------------------------+\n");
            printf("| b) |            | KG to PD  |\n");
            printf("+---------------------------+\n");



            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &choice);
            printf("+---------------------------+\n");
            convertKG(value, choice);
            isValidUnit = 1;

            }
	    //определяем, какую единицу измерения ввели с клавиатуры (В ДАННОМ СЛУЧАЕ ГРАММЫ)
            else if(strcmp(units, "gr") == 0) {
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
            //определяем, какую единицу измеерения ввеели с клавиатуры ( В ДАННОМ СЛУЧАЕ ЦЕНТНЕРЫ)
            else if(strcmp(units, "hw") == 0) {
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
	    //определяем, какую единицу измерения ввели с клавиатуры (В ДАННОМ СЛУЧАЕ СЕКУНДЫ)
	    else if(strcmp(units, "se") == 0) {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |           |SEC to MIN   |\n");
            printf("+---------------------------+\n");
            printf("| b) |           | SEC to HOUR  |\n");
            printf("+---------------------------+\n");
            printf("| c) |           | SEC to DAYS  |\n");
            printf("+---------------------------+\n");
            printf("| d) |           | SEC to WEEK  |\n");
            printf("+---------------------------+\n");
	    printf("| e) |           | SEC to MONTH  |\n");
            printf("+---------------------------+\n");
	    printf("| f) |           | SEC to YEAR  |\n");
            printf("+---------------------------+\n");


            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &choice);
            printf("+---------------------------+\n");
            convertSEC(value, choice);
            isValidUnit = 1;
	    }
	    //определяем, какую единицу измерения ввели с клавиатуры (В ДАННОМ СЛУЧАЕ МИНУТЫ)
            else if(strcmp(units, "mi") == 0) {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |           | MIN to SEC   |\n");
            printf("+---------------------------+\n");
            printf("| b) |           | MIN to HOUR  |\n");
            printf("+---------------------------+\n");
            printf("| c) |           | MIN to DAYS  |\n");
            printf("+---------------------------+\n");
            printf("| d) |           | MIN to WEEK  |\n");
            printf("+---------------------------+\n");
	    printf("| e) |           | MIN to MONTH  |\n");
            printf("+---------------------------+\n");
            printf("| f) |           | MIN to YEAR  |\n");
            printf("+---------------------------+\n");


            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &choice);
            printf("+---------------------------+\n");
            convertMIN(value, choice);
            isValidUnit = 1;

            }
	    //определяем, какую единицу измерения ввели с клавиатуры (В ДАННОМ СЛУЧАЕ ЧАСЫ)
            else if(strcmp(units, "hr") == 0) {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |           | HOUR to SEC   |\n");
            printf("+---------------------------+\n");
            printf("| b) |           | HOUR to MIN  |\n");
            printf("+---------------------------+\n");
            printf("| c) |           | HOUR to DAYS  |\n");
            printf("+---------------------------+\n");
            printf("| d) |           | HOUR to WEEK  |\n");
            printf("+---------------------------+\n");
	    printf("| e) |           | HOUR to MONTH  |\n");
            printf("+---------------------------+\n");
            printf("| f) |           | HOUR to YEAR  |\n");
            printf("+---------------------------+\n");


            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &choice);
            printf("+---------------------------+\n");
            convertHOUR(value, choice);
            isValidUnit = 1;

            }
	    //определяем, какую единицу измерения ввели с клавиатуры (В ДАННОМ СЛУЧАЕ ДНИ)
            else if(strcmp(units, "dy") == 0) {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |           | DAY to SEC   |\n");
            printf("+---------------------------+\n");
            printf("| b) |           | DAY to MIN  |\n");
            printf("+---------------------------+\n");
            printf("| c) |           | DAY to HOUR  |\n");
            printf("+---------------------------+\n");
            printf("| d) |           | DAY to WEEK  |\n");
            printf("+---------------------------+\n");
            printf("| e) |           | DAY to MONTH(30d)  |\n");
            printf("+---------------------------+\n");
            printf("| f) |           | DAY to MONTH(31d)  |\n");
            printf("+---------------------------+\n");
            printf("| g) |           | DAY to MONTH(28d)  |\n");
            printf("+---------------------------+\n");
            printf("| h) |           | DAY to YEAR  |\n");
            printf("+---------------------------+\n");


            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &choice);
            printf("+---------------------------+\n");
            convertDAY(value, choice);
            isValidUnit = 1;

            }
	    else {
                printf("+---------------------------+\n");
                printf("|      Invalid category.    |\n");
                printf("+---------------------------+\n");
                isValidUnit = 1;
            }


    }

return 0;
}
