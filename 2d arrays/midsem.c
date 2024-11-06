#include <stdio.h>
int main(){
    int order;
    printf("enter order:");
    scanf("%d",&order);
    int n = order;
    int m = order;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int large;
    int small;
    for(int i=0;i<n;i++){
        large = arr[i][0];
        for(int j=0;j<m;j++){
            if(large<arr[i][j]){
                large = arr[i][j];
            }
            small = arr[0][j];
            if(small>arr[])
        }
    }
}