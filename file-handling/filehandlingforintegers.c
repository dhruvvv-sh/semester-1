#include <stdio.h>
int main(){
    int i,sum=0;
    FILE *f1;
    f1=fopen("data.bin","w");
    for(int i=0;i<5;i++){
        putw(i,f1);
    }
    fclose(f1);
    f1=fopen("data.bin","r");
    while((i=getw(f1))!=EOF){
        sum = sum + i;
    }
    printf("%d",sum);
    fclose(f1);
    return 0;
}