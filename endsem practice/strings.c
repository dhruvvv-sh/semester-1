#include <stdio.h>
char cap(char x[]);
int main(){
    char c[50];
    printf("enter the sentence:");
    gets(c);
    cap(c);
}
char cap(char x[]){
    for(int i=0;x[i]!='\0';i++){
        int z = x[i];
        if(x[i]>=97&&x[i]<=122){
            x[i]=z-32;
        }
        else if (x[i]>=65&&x[i]<=90){
            x[i]=z+32;
        }
    }
    puts(x);
}
