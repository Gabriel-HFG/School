#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    int flip_guess, guess, correct = 0, incorrect = 0;
    srand(time(NULL)); 
    while (1) {
        while (1) {flip_guess = 0; printf("\n\nCoin flip guess?:\n\n1 = Heads\n2 = Tails\n3 = Exit\nInput: "); scanf("%d", &flip_guess);
                if (flip_guess < 1 || flip_guess > 3) {
                        printf("Invalid choice. Please enter 1 or 2 or 3\n");} else {printf("\nCorrect flips: %d\nIncorrect flips: %d\n", correct, incorrect); break;}}
                guess = (rand() % 2) + 1;
                if (flip_guess == 3) {return 0;}
                const char* flip[] = {"Number 0 is not in play", "Heads", "Tails"};
                if (guess == flip_guess) {
                printf("\nYou guess correctly: (correct awnser): %s", flip[guess]); ++correct;} else {printf("\nYou guess incorrecly: (correct awnser): %s", flip[guess]); ++incorrect;}
        }}