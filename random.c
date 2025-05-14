#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int rolls;
    printf("How many dice rolls do you want?"); scanf("%d", &rolls);
    srand(time(NULL));
    for (;rolls > 1; --rolls) {
        int diceRoll = (rand() % 6) + 1;
        printf("You rolled a: %d\n", diceRoll); }
    return 0;
}