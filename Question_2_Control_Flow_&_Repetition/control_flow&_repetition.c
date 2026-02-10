#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player_choice;
    int computer_choice;
    char *choices[] = {"Rock", "Paper", "Scissors"};

    srand(time(NULL));  // seed once before the loop

    while(1) {
        computer_choice = rand() % 3 + 1;

        printf("Enter 1 for Rock, 2 for Paper, 3 for Scissors or 0 if you want to exit the game: \n");
        scanf("%d", &player_choice);
        
        if(player_choice == 0) {
            break;
        }
        if(player_choice != 0 && player_choice != 1 && player_choice != 2 && player_choice != 3) {
            printf("Wrong input\n");
            continue;
        }

        printf("Computer chose: %s\n", choices[computer_choice - 1]);
        if(player_choice == computer_choice) {
            printf("It's a tie!\n");
        }
        else if ((player_choice == 1 && computer_choice == 3) ||
                 (player_choice == 2 && computer_choice == 1) ||
                 (player_choice == 3 && computer_choice == 2)) {
            printf("You win!\n");
            break;
        } else {
            printf("Computer wins!\n");
            break;
        }
    }

    return 0;
}
