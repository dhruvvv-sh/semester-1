#include <stdio.h>
#include <string.h>
void reverse(char x[]);
int main(){
    char c[50];
    printf("enter the string:");
    gets(c);
    reverse(c);
}
void reverse(char x[]){
    int k =0;
    int word = 0;
    char w[50][50];
    for(int i=0;i<=strlen(x);i++){
        if(x[i]==' '||x[i]=='\0'){
            w[k][word]='\0';
            k++;
            word=0;
        }
        else{
            w[k][word++]=x[i];
        }
    }
    char temp;
    int n = k;
    for(int i=0;i<n;i++){
        int z = strlen(w[i]);
        for(int j=0;j<z/2;j++){
            char temp = w[i][j];
            w[i][j] = w[i][z - j - 1];
            w[i][z - j - 1] = temp;
        }
    }
    strcpy(x, "");  // Empty the original string
    for (int i = 0; i < n; i++) {
        strcat(x, w[i]);
        if (i < n - 1) {
            strcat(x, " ");  // Add a space between words
        }
    }
    printf("Sorted string: %s\n", x);
}