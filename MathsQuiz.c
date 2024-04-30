#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#define MAX_NAME_LENGTH 20
#define FILE_PATH "Info.txt"

void Quiz(int lvl, int* points);
void savePoints(int points);
void loadPoints(int *points, int i);
void viewScores();

int main() {
    int Program_running = 1, Quiz_running = 0;
    int lvl = 1;
    int points = 0;
    char name[MAX_NAME_LENGTH] = "ABCD";
    char high[MAX_NAME_LENGTH] = "0";
    printf("\n| MATH TRAINER |\n");
    loadPoints(&points, 0);

    while (Program_running) {
        printf("-------------------------------\n");
        printf("Menu:\n");
        printf("1. Start Quiz\n");
        printf("2. Show Score\n");
        printf("3. View Scores\n");
        printf("4. Exit\n");
        printf("-------------------------------\n");
        printf("Enter your choice: ");

        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                Quiz_running = 1;
                while (Quiz_running) {
                    Quiz(lvl, &points);
                }
                break;
            case 2:
                if (points > 0) {
                    printf("Your Score: Total Points = %d\n", points);
                } else {
                    printf("Start solving to know your points.\n");
                }
                break;
            case 3:
                viewScores();
                break;
            case 4:
                printf("Exiting program...\n");
                Program_running = 0;
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    savePoints(points);

    printf("BYE\n");

    return 0;
}

void Quiz(int lvl, int* points) {
    int a, b, c, result, answer;
    char op;

    a = rand() % (lvl * 10) + 1;
    b = rand() % (lvl * 5) + 1;
    c = rand() % (lvl * 5) + 1;

    switch (rand() % 4) {
        case 0:
            op = '+';
            result = a + b;
            break;
        case 1:
            op = '-';
            result = a - b;
            break;
        case 2:
            op = '/';
            result = (a * c) / a;
            b = a;
            a = a * c;
            break;
        case 3:
            op = 'x';
            result = a * b;
            break;
    }

    printf("  %d\n%c %d\n_______\n  ", a, op, b);
    if (scanf("%d", &answer) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return;
    }

    if (answer == result) {
        (*points) += 1;
        printf("\nCORRECT\n\n");
    } else {
        (*points) -= 1;
        printf("\nWRONG,\n%d\n", result);
    }

    // Delay for 1 second
    #ifdef _WIN32
        Sleep(1000); // Windows
    #else
        struct timespec delay = { .tv_sec = 1, .tv_nsec = 0 };
        nanosleep(&delay, NULL); // POSIX-compliant (Linux, macOS)
    #endif
}

void savePoints(int points) {
    FILE *file;

    file = fopen(FILE_PATH, "wb");
    if (file != NULL) {
        fwrite(&points, sizeof(int), 1, file);
        fclose(file);
    }
}

void loadPoints(int *points, int i) {
    FILE *file;

    file = fopen(FILE_PATH, "rb");
    if (file != NULL) {
        fread(&points[i], sizeof(int), 1, file);
        fclose(file);
    }
}

void viewScores() {
    FILE *file;
    int score;
    int count = 1;

    file = fopen(FILE_PATH, "rb");
    if (file != NULL) {
        printf("Scores:\n");
        while (fread(&score, sizeof(int), 1, file)) {
            printf("Game %d: %d\n", count, score);
            count++;
        }
        fclose(file);
    } else {
        printf("No scores found.\n");
    }
}