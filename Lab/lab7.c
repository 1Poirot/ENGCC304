/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, score, min, max, play;

    srand(time(NULL)); 

    do {
        printf("Do you want to play game (1=play, -1=exit) : ");
        scanf("%d", &play);

        if (play == 1) {
            number = rand() % 100 + 1; 
            score = 100;
            min = 1;
            max = 100;

            printf("(Score = %d)\n", score);

            while (1) {
                printf("Guess the winning number (%d-%d) : ", min, max);
                scanf("%d", &guess);

                if (guess < number) {
                    score = score - 10;
                    printf("Sorry, the winning number is HIGHER than %d. (Score=%d)\n", guess, score);
                    min = guess + 1;
                }
                else if (guess > number) {
                    score = score - 10;
                    printf("Sorry, the winning number is LOWER than %d. (Score=%d)\n", guess, score);
                    max = guess - 1;
                }
                else {
                    printf("That is correct! The winning number is %d.\n", number);
                    printf("Score this game: %d\n", score);
                    break;
                }

                if (score <= 0) {
                    printf("Game over. Your score is 0.\n");
                    break;
                }
            }
        }
    } while (play == 1);

    printf("See you again.\n");
    return 0;
}