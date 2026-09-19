#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char userkichoice, compkichoice;
    int randomnumber;
    srand(time(0));
    randomnumber = rand() % 3; 
    if (randomnumber == 0) compkichoice = 'r';      
    else if (randomnumber == 1) compkichoice = 'p'; 
    else compkichoice = 's';                   

    printf(" Let's Play Rock, Paper, Scissors (bina cheating ke) \n");
    printf("Enter 'r' for Rock, 'p' for Paper, 's' for Scissors: ");
    scanf(" %c", &userkichoice); // Notice the space before %c to clear old inputs!

    printf("Computer chose: %c\n", compkichoice);


    if (userkichoice == compkichoice) {
        printf("tieieeii hogaya yay \n");
    }

    else if ((userkichoice == 'r' && compkichoice == 's') ||
             (userkichoice == 'p' && compkichoice == 'r') ||
             (userkichoice == 's' && compkichoice == 'p')) {
        printf("You win / ham jeet gayee (firse party)\n");
    } 

    else {
        printf(" Computer wins (AI HAI AI)\n");
    }

    return 0;
}
