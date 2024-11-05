#include <stdio.h>
#include <string.h>

// Function to sort words using bubble sort
void bubbleSort(char words[][100], int n) {
    char temp[100];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(words[j], words[j + 1]) > 0) {
                // Swap words[j] and words[j + 1]
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }
}

int main() {
    char input[500];
    char words[100][100]; // Array to hold the words
    int n = 0; // Number of words

    // Read the input string
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove the trailing newline character from the input
    input[strcspn(input, "\n")] = 0;

    printf("Original String: %s\n", input);

    // Split the string into words
    char* token = strtok(input, " ");
    while (token != NULL) {
        strcpy(words[n++], token); // Copy each word into the words array
        token = strtok(NULL, " ");
    }

    // Sort the words using bubble sort
    bubbleSort(words, n);

    // Display the sorted words
    printf("Sorted String: ");
    for (int i = 0; i < n; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");

    return 0;
}
