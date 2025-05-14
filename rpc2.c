#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#ifdef _WIN32
#include <windows.h>
#define sleep_ms(x) Sleep(x)
#else
#include <unistd.h>
#define sleep_ms(x) usleep((x) * 1000) 
#endif

int Get_Human_move(); 

int main() {
    int player, computer, determiner, tie = 0, wins = 0, losses = 0;

    while (1) {
        player = Get_Human_move();

        srand(time(NULL));
        computer = (rand() % 3) + 1;

        const char* moves[] = {"Invalid", "Rock", "Paper", "Scissors"};
        printf("\nYou chose: %s\n", moves[player]);
        printf("Computer chose: %s\n", moves[computer]);

        if (player == computer) {
            printf("It's a tie!\n");
            ++tie;
        } else if ((player == 1 && computer == 3) ||
                   (player == 2 && computer == 1) ||
                   (player == 3 && computer == 2)) {
            printf("You win!\n");
            ++wins;
        } else {
            printf("Computer wins!\n");
            ++losses;
        }

        printf("\nPlay again?\n1. Yes\n2. Results\n3. Autoplay\n4. Exit\nChoice: ");
        scanf("%d", &determiner);

        if (determiner == 4) {
            exit(0);
        }

        if (determiner == 3) {
            int times;
            while (1) {
                printf("\nHow many times would you like to autoplay? (1-1000): ");
                scanf("%d", &times);
                if (times < 1 || times > 1000) {
                    printf("Invalid choice. Please enter from 1 to 1000.\n");
                } else {
                    break;
                }
            }

            for (int i = 0; i < times; ++i) {
                player = (rand() % 3) + 1;
                computer = (rand() % 3) + 1;

                if (player == computer) {
                    ++tie;
                } else if ((player == 1 && computer == 3) ||
                           (player == 2 && computer == 1) ||
                           (player == 3 && computer == 2)) {
                    ++wins;
                } else {
                    ++losses;
                }
            }
        }

        if (determiner == 2) {
            printf("\nResults:\nGames won: %d\nGames lost: %d\nGames tied: %d\n", wins, losses, tie);
            sleep_ms(1200);  // Sleep for 1.2 seconds
        }
    }

    return 0;
}
int Get_Human_move() {
    int player_num;
    while (1) {
        printf("Rock Paper Scissors Game\n\n1 = Rock\n2 = Paper\n3 = Scissors\nInput: ");
        scanf("%d", &player_num);
        if (player_num < 1 || player_num > 3) {
            printf("Invalid choice. Please enter 1, 2, or 3.\n");
        } else {
            break;
        }
    }
    return player_num;
}