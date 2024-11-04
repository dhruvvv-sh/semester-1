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
int index = 0;
int z[9];
int count=1;
int sum=1;
int w=1;
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        z[index++]=a[i][j];
    }
}
for(int i=0;i<x;i++){
        if(z[0]==z[i]){
            count++;
        }
        if(z[4]==z[i]){
            sum++;
        }
        if(z[8]==z[i]){
            w++;
        }
    }
printf("the occurences of %d : %d , %d : %d , %d : %d \n",z[0],count,z[4],sum,z[8],w);
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