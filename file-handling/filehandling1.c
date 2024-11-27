#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("4.txt","w");
    int n;
    printf("enter rows:");
    scanf("%d",&n);
    int m;
    printf("enter col:");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fprintf(fp,"%d \t",arr[i][j]);
        }fprintf(fp,"\n");
    }
    fclose(fp);
    fp = fopen("4.txt","r");
    int i;
    printf("\nThe matrix from the file is:\n");
    while ((i = fgetw(fp)) != EOF) {
        putw(i);
    }
    fclose(fp);
}