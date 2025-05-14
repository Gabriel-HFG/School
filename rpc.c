#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, computer, determiner, tie = 0, wins = 0, losses = 0;

    while (1) {
            while (1) {printf("Rock Paper Scissors Game\n\n1 = Rock\n2 = Paper\n3 = Scissors\nInput: "); scanf("%d", &player);
            if (player < 1 || player > 3) {
                printf("Invalid choice. Please enter 1, 2, or 3.\n");} else {break;}}
        srand(time(NULL)); computer = (rand() % 3) + 1;

        const char* moves[] = {"Number 0 is not in play", "Rock", "Paper", "Scissors"};
        printf("\nYou chose: %s\n", moves[player]);
        printf("Computer chose: %s\n", moves[computer]);

        if (player == computer) {
            printf("It's a tie!\n"); ++tie;}
        else if ((player == 1 && computer == 3) || (player == 2 && computer == 1) || (player == 3 && computer == 2)) {
            printf("You win!\n"); ++wins;} 
        else {
            printf("Computer wins!\n"); ++losses;}
        
        while (1) {
        printf("\nPlay again?\n1. Yes\n2. Exit\nInput: "); scanf("%d", &determiner);
            if (determiner < 1 || determiner > 2) {printf("\nEnter a valid input... \n");} else {break;}}

        if (determiner == 1) {continue;}
        if (determiner == 2) {
            printf("\nResults:\n\nGames won: %d\nGames lost: %d\nGames tied: %d\n", wins, losses, tie); return 0;}
        }}