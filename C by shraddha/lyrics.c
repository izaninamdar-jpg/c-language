#include <stdio.h>
#include <unistd.h>   // for usleep()

void print_lyrics() {
    char *lyrics[] = {
        "Sambhaal ke rakha wo phool mera tu",
        "Meri shayari mein zaroor raha tu",
        "Jo aankhon mein pyaari si duniya basaayi",
        "Wo duniya bhi tha tu, wo lamha bhi tha tu",
        "Haan, lagte hain mujhko ye kisse sataane",
        "Deta na dil mera tujhko bhulaane",
        "Adhoore se vaade, adhoori si raatein",
        "Ab hisse mein daakhil mere bas wo yaadein"
    };

    int delays[] = {900000, 900000, 500000, 600000, 600000, 800000, 800000, 11000};

    int total_lines = 8;

    printf("lyrics:\n\n");
    usleep(1200000);   // 1.2 seconds pause before starting

    for (int i = 0; i < total_lines; i++) {
        for (int j = 0; lyrics[i][j] != '\0'; j++) {
            printf("%c", lyrics[i][j]);
            fflush(stdout);      // force immediate print
            usleep(50000);       // typing effect
        }
        printf("\n");
        usleep(delays[i]);       // line delay
    }
}

int main() {
    print_lyrics();
    return 0;
}
