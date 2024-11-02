#include <stdio.h>
struct book{
    char name[50];
    int pages;
    char author[50];
};
int main(){
    struct book b1;
    strcpy(b1.name,"percy jackson");
    b1.pages = 210;
    strcpy(b1.author,"Rick Riordan");
    printf("the book name:%s \n",b1.name);
    printf("the number of pages:%d \n",b1.pages);
    printf("the author of the book:%s \n",b1.author);
    struct book b2;
    strcpy(b2.name,"harry potter");
    b2.pages = 336;
    strcpy(b2.author,"JK ROWLING");
    printf("the book name:%s \n",b2.name);
    printf("the number of pages:%d \n",b2.pages);
    printf("the author of the book:%s \n",b2.author);

}