#include <stdio.h>

int main() {
    int number1;
    int number2;
    printf("\nWrite 2 numbers; ");
    scanf("%d %d",&number1, &number2);
    if (number1 == number2) {
        printf("\n%d and %d are equal", number1, number2);
    }
    else {
        printf("\nThe numbers are not equal");
    }
    int odd_or_even;
    printf("\nWrite a number: ");
    scanf("%d", &odd_or_even);
    int test = odd_or_even%2;
    if (test == 0) {
        printf("\nthe number is even");
    }
    else {
        printf("\nThe number is odd");
    }
    int day;
    printf("\nWrite a number between 1 and 7: ");
    scanf("%d", &day);
    if (day == 1) {
        printf("\nIts sunday");
    }
    else if (day == 2) {
        printf("\nIts monday\n");
    }
    else if (day == 3) {
        printf("\nIts tuesday\n");
    }
    else if (day == 4) {
        printf("\nIts wednesday\n");
    }
    else if (day == 5) {
        printf("\nIts thursday\n");
    }
    else if (day == 6) {
        printf("\nIts friday\n");
    }
    else if (day == 7) {
        printf("\nIts satuday\n");
    }
    else if (day != 1-7){
        printf("Error pick a number between 1 and 7\n");
    }  

    int number11;
    int number22;
    printf("\nWrite 2 numbers; ");
    scanf("%d %d",&number11, &number22);

    int operator;
    printf("Pick an operation type (input a number from 1-4): \n1. Addition\n2. Multiplication\n3. Division\n4. Subtraction\nInput: ");
    scanf("%d", &operator);

    if (operator == 1)  {
        float addition = number11 + number22;
        printf("Addition result: %d\n", addition);
    }
    if (operator == 2)  {
        float multiplication = number11 * number22;
        printf("Addition result: %d\n", multiplication);
    }
    if (operator == 3)  {
        float division = number11 / number22;
        printf("Addition result: %d\n", division);
    }
    if (operator == 4)  {
        float subtraction = number11 - number22;
        printf("Addition result: %d\n", subtraction);
    }
}