#include <stdio.h>
int freq(int a[][3],int x,int y);
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
}
int freq(int a[][3],int x,int y){
    int p = x;
    int q = y;
    int count =0;
    printf("first diagonal elements:\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            if(a[i][i]==a[i][j]){
                count++;
            }
        }
        printf("%d:%d \n",a[i][i],count);
        count = 0;
    }
    int r=1;
    printf("second diagonal elements:\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            if(a[i][q-1-i]==a[i][j]){
                r++;
            }
        }
        printf("%d:%d \n",a[i][p-i],r);
        r = 0;
    }
}