#include <stdio.h>
int main(){
    int i,sum=0;
    FILE *f1;
    f1=fopen("data.bin","w");//openeing the file data.bin in write mode (it will create a file if not present)
    for(int i=0;i<5;i++){
        putw(i,f1);//inputing integers from 1 to 4 
    }
    fclose(f1);//closing file
    f1=fopen("data.bin","r");//opening the file in read only mode
    while((i=getw(f1))!=EOF){
        sum = sum + i;//sum = 1+ 2 + 3 + 4 = 10
    }
    printf("%d",sum);
    fclose(f1);
    return 0;
}