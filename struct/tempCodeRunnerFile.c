#include <stdio.h>
#include <string.h>
void alpha(char q[]);
int main(){
    char c[50];
    printf("enter the word");
    scanf("%s",c);
    alpha(c);
}
void alpha(char q[]){
    int k=0;
    int arr[strlen(q)];
    int z = strlen(q);
    for(int i=0;q[i]!='\0';i++){
        arr[k++]=q[i];
    }
    int temp;
    for(int i=0;i<z;i++){
        for(int j=0;j<z-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<z;i++){
        q[i]=arr[i];
    }
    puts(q);
}