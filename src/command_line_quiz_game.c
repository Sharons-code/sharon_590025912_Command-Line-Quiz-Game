#include <stdio.h>
#include <ctype.h>

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

char getValidAnswer() {
    char ans;

    while (1) {
        printf("Your answer: ");
        scanf(" %c", &ans);
        clearBuffer();

        ans = toupper(ans); 

        if (ans == 'A' || ans == 'B' || ans == 'C' || ans == 'D') {
            return ans; 
        }

        printf("Invalid input! Please enter A, B, C, or D.\n");
    }
}

int main() {
    int score = 0;
    char answer;

    printf("\n========== COMMAND LINE QUIZ GAME ==========\n");

    printf("\nQ1) What is the capital of India?\n");
    printf("A) Mumbai\nB) New Delhi\nC) Kolkata\nD) Chennai\n");
    answer = getValidAnswer();

    if(answer == 'B') { score++; printf("Correct!\n"); }
    else printf("Wrong! Correct answer: B\n");

    printf("\nQ2) Which language is used for system programming?\n");
    printf("A) Python\nB) Java\nC) C\nD) HTML\n");
    answer = getValidAnswer();

    if(answer == 'C') { score++; printf("Correct!\n"); }
    else printf("Wrong! Correct answer: C\n");

    printf("\nQ3) Which data structure uses FIFO?\n");
    printf("A) Stack\nB) Queue\nC) Tree\nD) Graph\n");
    answer = getValidAnswer();

    if(answer == 'B') { score++; printf("Correct!\n"); }
    else printf("Wrong! Correct answer: B\n");

    printf("\nQ4) 2 + 2 = ?\n");
    printf("A) 3\nB) 4\nC) 5\nD) 6\n");
    answer = getValidAnswer();

    if(answer == 'B') { score++; printf("Correct!\n"); }
    else printf("Wrong! Correct answer: B\n");

    printf("\nQ5) Who is known as the Father of Computers?\n");
    printf("A) Charles Babbage\nB) Alan Turing\nC) Bill Gates\nD) Tim Berners-Lee\n");
    answer = getValidAnswer();

    if(answer == 'A') { score++; printf("Correct!\n"); }
    else printf("Wrong! Correct answer: A\n");

    printf("\n=============================================\n");
    printf("QUIZ COMPLETED!\n");
    printf("Your Total Score: %d / 5\n", score);

    if(score == 5)
        printf("Excellent! 🌟\n");
    else if(score >= 3)
        printf("Good Job! 👍\n");
    else
        printf("Better Luck Next Time! 🙂\n");

    printf("=============================================\n");

    return 0;
}
