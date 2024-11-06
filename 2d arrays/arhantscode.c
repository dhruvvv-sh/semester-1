#include <stdio.h>
#include <stdlib.h>
void main(){
    int m;
    int arr[50][50];
    printf("Enter array dimensions only odd number hahaheheh \n");
    scanf("%d",&m);
    if(m%2==0){
        printf("m is not odd");
        exit(0);
    }
    printf("Enter elements of array \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("Original array :  \n");
    
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
   void freq(){
    int diag1[50];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
          if(i==j){
              diag1[i]=arr[i][j];
          }
        }
    }
    
    int count1=0;
    int count2=0;
    int count3=0;
    
    
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(diag1[0]==arr[i][j]){
                count1++;
            }
            
            if(diag1[1]==arr[i][j]){
                count2++;
            }
            
            if(diag1[2]==arr[i][j]){
                count3++;
            }
        }
    }
    
    printf("occurence of %d: %d \n",diag1[0],count1);
    printf("occurence of %d: %d \n",diag1[1],count2);
    printf("occurence of %d: %d \n",diag1[2],count3);
    
    
    
}

freq();

}