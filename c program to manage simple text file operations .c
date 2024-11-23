#include <stdio.h>
#include <stdlib.h>

#define FILENAME "data.txt"
#define MAX_LENGTH 100


void writeToFile();
void readFromFile();
void appendToFile();

int main() {
    int choice;

    do {
        printf("\n--- File Operations Menu ---\n");
        printf("1. Write to file\n");
        printf("2. Read from file\n");
        printf("3. Append to file\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1:
                writeToFile();
                break;
            case 2:
                readFromFile();
                break;
            case 3:
                appendToFile();
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0 ;
}


void writeToFile() {
    FILE *file = fopen(FILENAME, "w");
    if (file == NULL) {
        perror("Error opening file");
        return  ;
    }

    char sentence[MAX_LENGTH];
    printf("Enter a sentence to write to the file: ");
    fgets(sentence, MAX_LENGTH, stdin);

    fprintf(file, "%s", sentence);
    fclose(file);

    printf("Sentence written to file successfully.\n");
}


void readFromFile() {
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) {
        perror("Error opening file");
        return ;
    }

    char sentence[MAX_LENGTH];
    printf("\nContent of the file:\n");
    while (fgets(sentence, MAX_LENGTH, file) != NULL) {
        printf("%s", sentence);
    }
    fclose(file);
}


void appendToFile() {
    FILE *file = fopen(FILENAME, "a");
    if (file == NULL) {
        perror("Error opening file");
        return ;
    }

    char sentence[MAX_LENGTH];
    printf("Enter a sentence to append to the file: ");
    fgets(sentence, MAX_LENGTH, stdin);

    fprintf(file, "%s", sentence);
    fclose(file);

    printf("Sentence appended to file successfully.\n");
}