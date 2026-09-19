#include    <stdio.h>
#include    <stdlib.h>
#include    <time.h>        

int main () {
       
    srand(time(0));
    // generate random number between 1 and 100
    int randomnumber = rand() % 100 + 1;
     int no_of_guesses = 0;
     int guessed ;
    // print the random number
    // printf("Random number between 1 and 100: %d\n", randomnumber);
    printf("Guess the number\n ");
    do {
        printf("Enter your guess: ");
        scanf("%d", &guessed);
        
        if (guessed < randomnumber) {
        printf("higher number\n");
        }
        else if (guessed > randomnumber) {
        printf("lower number\n");}
          
        no_of_guesses++;
    }
    while (guessed!=randomnumber);
    
       if (guessed == randomnumber) {
        printf("Congratulations! You guessed the number in %d attempts.\n", no_of_guesses);

    
    return 0;
}
}