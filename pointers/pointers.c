#include <stdio.h>
void swap(int *x, int *y);
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int q ;
    printf("enter the number:");
    scanf("%d",&q);
    printf("before swap n = %d,q = %d \n",n,q);
    swap(&n,&q);
    printf("after swap n:%d , q:%d",n,q);
    return 0;
}
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}