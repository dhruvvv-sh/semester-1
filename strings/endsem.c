#include <stdio.h>
#include <string.h>

// Function to sort words in a string
void sort(char x[]);

int main() {
    // Part A: Read and display the string
    char c[50];
    
    printf("Enter string: ");
    gets(c); 
    
    sort(c);
    
    return 0;
}

// Function to sort words alphabetically
void sort(char x[]) {
    int k = 0;  // Word index
    int word = 0;  // Character index within a word
    char w[50][50];  // Array to store words
    char temp[50];  // Temporary array for swapping

    // Splitting the string into words
    for (int i = 0; i <= strlen(x); i++) {
        if (x[i] == ' ' || x[i] == '\0') {
            w[k][word] = '\0';  // Null terminate the current word
            k++;  // Move to the next word
            word = 0;  // Reset character index for the new word
        } else {
            w[k][word++] = x[i];  // Add characters to the current word
        }
    }
    
    int n = k;  // Number of words

    // Sorting the words alphabetically using bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(w[i], w[j]) > 0) {
                strcpy(temp, w[i]);
                strcpy(w[i], w[j]);
                strcpy(w[j], temp);
            }
        }
    }

    // Reconstructing the sorted string
    strcpy(x, "");  // Empty the original string
    for (int i = 0; i < n; i++) {
        strcat(x, w[i]);
        if (i < n - 1) {
            strcat(x, " ");  // Add a space between words
        }
    }

    // Display the sorted string
    printf("Sorted string: %s\n", x);
}
