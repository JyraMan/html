      #include <stdio.h>
      #include <string.h>

         // Функция для конвертации САНТИМЕТРОВ
        void convertSM(float value, char choise) {
        switch (choise) {
        case 'a':

        printf("\n\n");
        printf("+-----------------------------------------------------------+\n");
        printf("| Your answer is: %.2f centimeters is equal to %.2f meters. \n", value, value / 100);
        printf("+-----------------------------------------------------------+\n");
        break;
        case 'b':
        printf("\n\n");
        printf("+-----------------------------------------------------------+\n");
        printf("| Your answer is: %.2f centimeters is equal to %.2f millimeters. \n", value, value * 10);
        // printf("| Your answer is: %.2f meters is equal to %.2f centimeters. \n", value, value * 100);
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
        printf("| Your answer is: %.2f centimeters is equal to %.2f decimeter. \n", value, value / 10);
        printf("+-----------------------------------------------------------+\n");
        break;

        // Добавить здесь другие варианты конвертации длины потом
        default:
        printf("| Invalid choice. |\n");
        break;
        }
        }

        //// Функция для конвертации МЕТРОВ
    void convertationM(float value, char choise) {
        switch(choise) {
            case 'a':
             printf("\n\n");
        printf("+-----------------------------------------------------------+\n");
        printf("| Your answer is: %.2f meters is equal to %.2f centimeters. \n", value, value * 100);
        printf("+-----------------------------------------------------------+\n");
        break;
        case 'b':
        {
            printf("\n\n");
        printf("+-----------------------------------------------------------+\n");
        printf("| Your answer is: %.2f meters is equal to %.2f kilometers. \n", value, value / 1000);
        printf("+-----------------------------------------------------------+\n");
        break;
        }
        case 'c':
        {
            printf("+-----------------------------------------------------------+\n");
        printf("| Your answer is: %.2f meters is equal to %.2f miles. \n", value, value / 1069);
        printf("+-----------------------------------------------------------+\n");
        break;
        }
        case 'd':
        {
            printf("+-----------------------------------------------------------+\n");
        printf("| Your answer is: %.2f meters is equal to %.2f foot. \n", value, value * 3.281);
        printf("+-----------------------------------------------------------+\n");
        break;
        }

        default:
        printf("| Invalid choice. |\n");
        break;
        }
    }
            //функция для конвертации ЦЕЛЬСИЯ
            void convertC(float value, char choice) {
        switch (choice) {
        case 'a':
        printf("\n\n");
        printf("+-----------------------------------------------------------+\n");
        printf(" | Your answer is: %.2f Celsius is equal to %.2f Fahrenheit. \n", value, (value * 9 / 5) + 32);
        printf("+-----------------------------------------------------------+\n");
        break;
        case 'b':
        printf("\n\n");
        printf("+-----------------------------------------------------------+\n");
        printf(" | Your answer is: %.2f Celsius is equal to %.2f Kelvins. \n", value, value + 273);
        printf("+-----------------------------------------------------------+\n");
        break;

        default:
        printf("| Invalid choice. |\n");
        break;
        } 
            }
            //функция для конвертации КЕЛЬВИНЫ 
            void convertK(float value, char choise) {
                switch (choise) {
                    case 'a': 
        printf("\n\n");
        printf("+-----------------------------------------------------------+\n");
        printf(" | Your answer is: %.2f kelvin is equal to %.2f Fahrenheit. \n", value, 1.8 * (value - 273) + 32);
        printf("+-----------------------------------------------------------+\n");
        break;  
        case 'b':
        printf("\n\n");
        printf("+-----------------------------------------------------------+\n");
        printf(" | Your answer is: %.2f kelvin is equal to %.2f Celsius. \n", value,  value - 273);
        printf("+-----------------------------------------------------------+\n");
        break;


        default:
        printf("| Invalid choice. |\n");
        break;
            }
            }

            //функция для ФАРЕНГЕЙТ
            void convertF(float value, char choise) {
                switch (choise) {
                    case 'a':
                    printf("\n\n");
        printf("+-----------------------------------------------------------+\n");
        printf(" | Your answer is: %.2f Fahrenheit is equal to %.2f Kelvin. \n", value, (5.0/9.0) * (value - 32) + 273.15);
        printf("+-----------------------------------------------------------+\n");
        break; 
            case 'b':
            printf("+-----------------------------------------------------------+\n");
        printf(" | Your answer is: %.2f Fahrenheit is equal to %.2f Celsius. \n", value, (value - 32) * (5.0/9.0));
        printf("+-----------------------------------------------------------+\n");
        break;


                }
            }

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
        //определяем, какую единицу измерения ввели с клавиатуры (В ДАННОМ СЛУЧАЕ ЦЕЛЬСИЯ)
        else if(strcmp(units, "c") == 0) 
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
            isValidUnit = 1;
        
        }
        //определяем, какую единицу измерения ввели с клавиатуры (В ДАННОМ СЛУЧАЕ КЕЛЬВИНЫ)
         else if(strcmp(units, "k") == 0) 
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


            else {  
                printf("+---------------------------+\n");
                printf("|      Invalid category.    |\n");
                printf("+---------------------------+\n");
        isValidUnit = 1;
    }
        
        
    }

return 0;
}