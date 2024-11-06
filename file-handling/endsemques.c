#include <stdio.h>
int main(){
    FILE *fp;
    fp=fopen("2.txt","w");
    int n;
    int m;
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
    fprintf(fp,"the matrix is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fprintf(fp,"%d \t",arr[i][j]);
        }fprintf(fp,"\n");
    }
    fclose(fp);
}