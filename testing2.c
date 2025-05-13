#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

int main() {
    srand(time(NULL));
    double starter_base, exponent, no_change_base, no_change_exponent, result;
    int defenition = 0, random_or_not = 0;

    while (1) {
        do {
            printf("\nCalculate powers but really complicated because profe wanted to\n");
            printf("1. If you want to input the powers\n");
            printf("2. If you want random numbers\n");
            printf("3. Exit\nInput: ");
            scanf("%d", &random_or_not);

            if (random_or_not == 1) {
                starter_base = -1;
                exponent = -1;
                while (starter_base <= 0 || starter_base > 100) {
                    printf("Enter a base number above 0 but less than 100: ");
                    scanf("%lf", &starter_base);
                }
                while (exponent <= 0 || exponent > 10) {
                    printf("Enter an exponent for that number above 0 but less than 10: ");
                    scanf("%lf", &exponent);
                }
            } else if (random_or_not == 2) {
                starter_base = rand() % 100 + 1;  
                exponent = (rand() % 10) + 1;
                printf("\nRandom base: %.2lf, Random exponent: %.2lf\n", starter_base, exponent);
            } else if (random_or_not == 3) {
                printf("\nExit...\n");
                return 0;
            } else {
                printf("\nEnter a valid input...\n");
            }
        } while (random_or_not != 1 && random_or_not != 2);

        no_change_base = starter_base;
        no_change_exponent = exponent;
        defenition = 0;

        while (defenition < 1 || defenition > 4) {
            printf("\nHow would you like to do the operation\n");
            printf("1. While Loop\n2. For loop\n3. Pow function\n4. All 3\nInput: ");
            scanf("%d", &defenition);

            if (defenition == 1) {
                double temp_result = no_change_base;
                double temp_exp = no_change_exponent;
                while (temp_exp > 1) {
                    temp_result *= no_change_base;
                    --temp_exp;
                }
                result = temp_result;
            } else if (defenition == 2) {
                double temp_result = 1;
                for (int i = 1; i <= no_change_exponent; ++i) {
                    temp_result *= no_change_base;
                }
                result = temp_result;
            } else if (defenition == 3) {
                result = pow(no_change_base, no_change_exponent);
            } else if (defenition == 4) {
                double while_result = no_change_base; double temp_exp = no_change_exponent; double for_result = 1;

                while (temp_exp > 1) {
                    while_result *= no_change_base;
                    --temp_exp;
                }
                for (int i = 1; i <= no_change_exponent; ++i) {
                    for_result *= no_change_base;
                }
                double pow_result = pow(no_change_base, no_change_exponent);

                printf("\nWhile Loop:    %.2lf ** %.2lf = %.2lf", no_change_base, no_change_exponent, while_result);
                printf("\nFor Loop:      %.2lf ** %.2lf = %.2lf", no_change_base, no_change_exponent, for_result);
                printf("\nPow Function:  %.2lf ** %.2lf = %.2lf\n", no_change_base, no_change_exponent, pow_result);

                result = pow_result;
            } else {
                printf("\nPlease enter a valid input\n\n");
            }
        }
        if (defenition != 4) {
            printf("\n%.2lf ** %.2lf = %.2lf\n\n", no_change_base, no_change_exponent, result);
        }
    }
}