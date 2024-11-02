#include <stdio.h>
int main(){
    char c[90],a[90];
    printf("enter string 1:");
    gets(c);
    printf("enter string 2:");
    gets(a);
    int n = strcmp(c,a);
    printf("%d",n);
}
