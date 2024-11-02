#include <stdio.h>
int main(){
    int n;
    int *p1;
    p1=&n;
    *p1=21;
    printf("%d",n);
}