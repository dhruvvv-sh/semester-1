#include <stdio.h>
int main(){
    char c[90];
    printf("enter string:");
    gets(c);
    int n;
    int flag = 1;
    n = strlen(c);
    for(int i=0;i<n/2;i++){
        if(c[i]!=c[n-i-1]){
        flag = 0;
        break;
    }
    }
    if(flag == 1){
        printf("pallindrome");
    }
    if(flag == 0){
    printf("not a pallindrome");
    }
}