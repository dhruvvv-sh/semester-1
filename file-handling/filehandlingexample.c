#include <stdio.h>
int main(){
    FILE *in;
    in = fopen("ex.txt","w");
    char c;
    printf("enter elements in the file:\n");
    while((c=getchar())!=EOF){
        putc(c,in);
    }
    fclose(in);
    in = fopen("ex.txt","r");
    while((c=getc(in))!=EOF){
        printf("%c",c);
    }
    fclose(in);
    return 0;
}