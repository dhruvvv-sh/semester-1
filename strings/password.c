#include <stdio.h>
#include <string.h>
int main(){
    char pw[10];
    char un[10];
    char ch;
    printf("enter your username:");
    gets(un);
    printf("enter password <within 6 char>:\n");
    for(int i=0;i<6;i++){
        pw[i]=getch();
        printf("*");
    }
    printf("\nyour password entered is:\n");
    puts(pw);
}