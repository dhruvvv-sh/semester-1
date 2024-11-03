#include <stdio.h>
int main(){
    FILE *fp1;
    char c;
    fp1= fopen("INPUT","w");
    printf("enter the content for the file:\n");
    while((c=getchar())!=EOF){
        if(65<=c&&c<=90){
        int z = c;
        c = z + 32;
    }
    else if(97<=c&&c<=122){
        int q = c;
        c = q - 32;
    }
        putc(c,fp1);
    }
    fclose(fp1);
    fp1=fopen("INPUT","r");
    printf("file content:\n");
    while((c=getc(fp1))!=EOF){
        printf("%c",c);
    }
       fclose(fp1);
        return 0;
}