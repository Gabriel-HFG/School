#include <stdio.h>

int main() {

    // snack 1
    char snack1[] = "Doritos";
    float price1 = 16.99;
    int stock1= 13;

    // snack 2
    char snack2[] = "Ruffles";
    float price2 = 17.99;
    int stock2= 20;

    // snack 3
    char snack3[] = "Takis";
    float price3 = 6.99;
    int stock3= 31;

    printf("Welcome to the snack shop\n-------------------------\n");
    printf("1. %s - $%.2f - %d Avalible\n", snack1, price1, stock1);
    printf("2. %s - $%.2f - %d Avalible\n", snack2, price2, stock2);
    printf("3. %s - $%.2f - %d Avalible\n", snack3, price3, stock3);
}
