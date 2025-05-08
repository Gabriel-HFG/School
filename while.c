#include <stdio.h>

int main() {
    int num = -1 , count = 0;
    do {
    printf("Enter a positive number: ");
    scanf("%d", &num); } while (num <= 0);
    if (num == 0) {
        count = 1;
    } else {
        while (num > 0) {
            num = num / 10;
            count++;
        }
    }
    printf("Number of digits %d\n", count);
}