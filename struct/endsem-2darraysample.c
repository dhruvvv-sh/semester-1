#include <stdio.h>
int freq(int a[][3],int x,int y);
int largest(int a[][3],int x,int y);
int main(){
    int n,m;//n is the rows and m is the columns
    printf("enter rows:");
    scanf("%d",&n);
    printf("enter col:");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    freq(arr,n,m);
    int lar = largest(arr,n,m);
    printf("the largest element in the diagonal is:%d",lar);
}
int freq(int a[][3],int x,int y){
int k=0;
int intial[9];
int count[3]={0,0,0};
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        intial[k++]=a[i][j];
    }
}
int diagonal[3] = {a[0][0], a[1][1], a[2][2]}; // The diagonal elements
    // Counting the frequency of each diagonal element in the entire matrix
    for (int i = 0; i < 9; i++) {
        if (intial[i] == diagonal[0]) 
        count[0]++;
        if (intial[i] == diagonal[1]) 
        count[1]++;
        if (intial[i] == diagonal[2]) 
        count[2]++;
    }
    printf("Frequency of diagonal elements:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d: %d times \n", diagonal[i], count[i]);
    }
}
int largest(int a[][3],int x,int y){
    int large = a[0][0];
    for(int i=0;i<x;i++){
        if(large<a[i][i]){
            large = a[i][i];
        }
        }
        return(large);
}