#include <stdio.h>

int main() {
    int rows;
    char ch;

    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &rows);

    printf("Enter the character to use for the triangle: ");
    scanf(" %c", &ch); 
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= (rows - i); j++) {
        printf(" ");}
        for (int k = 1; k <= i; k++) {printf("%c", ch);}
        printf("\n");}
}