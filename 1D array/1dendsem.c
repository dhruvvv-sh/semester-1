#include <stdio.h>
int main(){
    int n;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the array is:\n");
    for(int i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }
    int r[n];
    for(int i=0;i<n;i++){
        r[i]=arr[i];
    }
    printf("\nthe array is:\n");
    for(int i=0;i<n;i++){
        printf("%d \t",r[i]);
    }
}