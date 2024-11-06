#include <stdio.h>
void w(char c[]);
int main(){
    char sent[50];
    printf("enter your sentence:");
    gets(sent);
    printf("the sentence is: \n");
    puts(sent);
    printf("the sentence after the change:\n");
    w(sent);
}
void w(char c[]){
    int count = 1;
    for(int i=0;c[i]!='\0';i++){
        if(c[i]==' '&&c[i+1]!=' '){
            count++;
        }
    }
char e[count][10];  // Array to store words, assuming max word length is 9 characters
    int k = 0, word_idx = 0, letter_idx = 0;

    // Splitting the sentence into words
    for (int i = 0; i <= strlen(c); i++) {
        if (c[i] == ' ' || c[i] == '\0') {  // End of a word
            e[word_idx][letter_idx] = '\0';  // Null-terminate the current word
            word_idx++;
            letter_idx = 0;
        } else {
            e[word_idx][letter_idx++] = c[i];  // Copy character to current word
        }
    }
    for (int i = 0; i < count; i++) {
        printf("%s\n", e[i]);
    }
}