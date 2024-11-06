#include <stdio.h>
void freq(int c[][3],int x,int y);
int main(){
    //part a
    int order;
    printf("enter order:");
    scanf("%d",&order);
    int n = order;
    int m = order;
    int arr[n][m];
    printf("enter elements of the matrix: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the matrix entered is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d \t",arr[i][j]);
        }printf("\n");
    }
    //part b
    freq(arr,n,m);


}
void freq(int c[][3],int x,int y){
    int k = 0;
    int q[x*y];
    int count[3]={0,0,0};
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            q[k++]=c[i][j];
        }
    }
    printf("the elements in the 1d array is:\n");
    for(int i=0;i<9;i++){
        printf("%d \t",q[i]);
    }
    for(int i=0;i<9;i++){
        if(q[0]==q[i]){
            count[0]++;
        }
        else if(q[4]==q[i]){
            count[1]++;
        }
        else if(q[8]==q[i]){
            count[2]++;
        }
    }
    printf("\nthe diagonal elements frequency :\n");
        printf("%d:%d \n",q[0],count[0]);
        printf("%d:%d \n",q[4],count[1]);
        printf("%d:%d \n",q[8],count[2]);
    //part c
    int large = q[0]>q[4] ? (q[0]>q[8]?q[0]:q[8]) : (q[4]>q[8]?q[4]:q[8]);
    printf("the largest element in the diagonal is:%d \n",large);
    printf("the new matrix is:\n");
    int middle  = x / 2;
    for(int i=0;i<3;i++){
        c[middle][i] = large;
    }
    printf("the matrix entered is-->\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d \t",c[i][j]);
        }printf("\n");
    }
}