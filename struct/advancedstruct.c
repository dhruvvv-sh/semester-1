#include <stdio.h>
int main(){
    struct book{//defining a structure of books which lets the user input names and pages
        int pages;
        char name[10];
    };
    struct book b[5];
    printf("enter the names and pages of books:\n");
    for(int i=0;i<5;i++){
        scanf("%s %d",b[i].name,&b[i].pages);
    }
    printf("the books entered are:");
    for(int i=0;i<5;i++){
        printf("%d %s \n",b[i].pages,b[i].name);
    } 
}