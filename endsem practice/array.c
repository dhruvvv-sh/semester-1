#include <stdio.h>
int main(){
    int n,m;
    printf("enter rows:");
    scanf("%d",&n);
    printf("enter col:");
    scanf("%d",&m);
    int arr[n][m];
    int ar[n][m];
    int c[n][m];
    printf("enter elements of first matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter elements of second matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    printf("the addition of both the matrices:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c[i][j]=arr[i][j]+ar[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d \t",c[i][j]);
        }printf("\n");
    }
    //for rows and coloumn sum computing
    //for row sum 
    int rowsum[n];
        for(int i=0;i<n;i++){
        rowsum[i]=0;
        for(int j=0;j<m;j++){
        rowsum[i]=rowsum[i]+c[i][j];
        }
    }
    //for coloumn sum
    int colsum[m];
    for(int j=0;j<m;j++){
        colsum[j]=0;
        for(int i=0;i<n;i++){
            colsum[j]=colsum[j]+c[i][j];
        }
    }
    //printing the new matrix
    printf("the new matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d \t",c[i][j]);
        }
        printf("%d \n",rowsum[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    printf("%d \t",colsum[i]);

}