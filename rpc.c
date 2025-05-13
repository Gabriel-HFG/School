#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, computer;

    while (1) {
    printf("Rock Paper Scissors Game\n\n1 = Rock\n2 = Paper\n3 = Scissors\nInput: "); scanf("%d", &player);
    if (player < 1 || player > 3) {
        printf("Invalid choice. Please enter 1, 2, or 3.\n");} else {break;}}

    srand(time(NULL)); computer = (rand() % 3) + 1;

    const char* moves[] = {"Number 0 is not in play", "Rock", "Paper", "Scissors"};
    printf("You chose %s\n", moves[player]);
    printf("Computer chose %s\n", moves[computer]);

    if (player == computer) {
        printf("It's a tie!\n");}
    else if ((player == 1 && computer == 3) || (player == 2 && computer == 1) || (player == 3 && computer == 2)) {
        printf("You win!\n");} 
    else {
        printf("Computer wins!\n");
    }
    return 0;}