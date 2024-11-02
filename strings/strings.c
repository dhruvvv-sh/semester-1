#include <stdio.h>
int main(){
    char c[80];
    printf("enter your name:");
    gets(c);
    int count=0;
    for(int i=0;c[i]!='\0';i++){
        count++;
    }
    printf("number of letters:%d \n",count);
    int n = strlen(c);
    printf("%d \n",n);
    char a[90];
    strcpy(a,c);
    puts(a);
}