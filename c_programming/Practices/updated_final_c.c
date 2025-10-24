// KR, SN, DG, VC - C Final Hangman Project
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

// Function 1: Prints the Hangman figure depending on number of strikes
void drawHangman(int strikes) {
    const char *stages[] = {
        "  _______\n"
        " |/      |\n"
        " |\n"
        " |\n"
        " |\n"
        " |\n"
        "_|___\n",

        "  _______\n"
        " |/      |\n"
        " |      ( )\n"
        " |\n"
        " |\n"
        " |\n"
        "_|___\n",

        "  _______\n"
        " |/      |\n"
        " |      ( )\n"
        " |       |\n"
        " |\n"
        " |\n"
        "_|___\n",

        "  _______\n"
        " |/      |\n"
        " |      ( )\n"
        " |      /|\n"
        " |\n"
        " |\n"
        "_|___\n",

        "  _______\n"
        " |/      |\n"
        " |      ( )\n"
        " |      /|\\\n"
        " |\n"
        " |\n"
        "_|___\n",

        "  _______\n"
        " |/      |\n"
        " |      ( )\n"
        " |      /|\\\n"
        " |       |\n"
        " |\n"
        "_|___\n",

        "  _______\n"
        " |/      |\n"
        " |      ( )\n"
        " |      /|\\\n"
        " |       |\n"
        " |      /\n"
        "_|___\n",

        "  _______\n"
        " |/      |\n"
        " |      ( )\n"
        " |      /|\\\n"
        " |       |\n"
        " |      / \\\n"
        "_|___\n"
    };

    printf("%s\n", stages[strikes]);
}

// Function 2: Handles guessing logic; returns 1 if correct, 0 if not
int processGuess(const char *word, char *display, char *guessed, char guess) {
    // If already guessed
    if (strchr(guessed, guess)) {
        printf("You already guessed '%c'!\n\n", guess);
        return 2; // signal repeated guess
    }

    // Add guess to guessed letters
    int len = strlen(guessed);
    guessed[len] = guess;
    guessed[len + 1] = '\0';

    // Check for match
    int found = 0;
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == guess) {
            display[i] = guess;
            found = 1;
        }
    }
    return found;
}

int main(void) {
    // Word bank
    const char *words[] = {
        "ocean","water","white","ducky","early","smoke","train","layer",
        "alone","brain","craft","paint","flute","beach","heart","human","image",
        "lemon","lucky","mouse","metal","noise","plane","phone","power","quiet",
        "ready","store","sport","storm","today","table","under","video","watch",
        "young","slate","crane","brick","stare","raise","arise","bread"
    };
    int num_words = sizeof(words) / sizeof(words[0]);

    srand(time(NULL));
    const char *word = words[rand() % num_words];
    int word_len = strlen(word);

    char guessed[30] = {0};
    char display[30];
    int strikes = 0;

    for (int i = 0; i < word_len; i++)
        display[i] = '_';
    display[word_len] = '\0';

    printf("Welcome to HANGMAN!\n");
    printf("Try to guess the %d-letter word. You have 8 strikes total.\n\n", word_len);

    // Main loop
    while (strikes < 8) {
        drawHangman(strikes);
        printf("Word: ");
        for (int i = 0; i < word_len; i++) printf("%c ", display[i]);
        printf("\nGuessed letters: %s\n", guessed);
        printf("Strikes: %d / 8\n", strikes);

        // Get user guess
        printf("Guess a letter: ");
        char guess;
        scanf(" %c", &guess);
        guess = tolower(guess);

        int result = processGuess(word, display, guessed, guess);

        if (result == 2) continue;          // already guessed
        else if (result == 1) printf("Correct!\n\n");
        else {
            printf("Wrong guess!\n\n");
            strikes++;
        }

        // Check if word is complete
        if (strcmp(word, display) == 0) {
            drawHangman(strikes);
            printf("You guessed the word: %s!\n", word);
            return 0;
        }
    }

    // If loop ends: player lost
    drawHangman(strikes - 1);
    printf("You lost! The word was: %s\n", word);

    return 0;
}