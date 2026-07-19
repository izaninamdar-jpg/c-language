#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); // Seed the random number generator
    int player, computer = (rand()%3);
    // 0 for snake, 1 for water, 2 for gun
    printf("Enter your choice (1 for rock, 2 for paper, 3 for scissors): ");
    scanf("%d", &player);
    printf("Computer chose: %d\n", computer);
    if (player == 0 && computer == 0)
    { 
        printf("its a draw \n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("you win\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("you loose\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("you lose\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("its a draw \n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("you loose\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("you win\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("you loose\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("its a draw \n");
    }
    else
    {
        printf("Invalid input! Please enter a number between 1 and 3.");
    }
    return 0;
}