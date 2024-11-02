#include <stdio.h>
float hike(int x,int y,float A);
struct employee{
    int empno;
    int age;
    char name[20];
    int doj;
    float salary;
};
int main(){
    struct employee e[2];
    int temp;
    strcpy(e[0].name,"arhant");
    printf("enter the employee number , age , date of joining, salary of arhant:");
    scanf("%d %d %d %f",&e[0].empno,&e[0].age,&e[0].doj,&e[0].salary);
    int p =e[0].age;
    int r = e[0].doj;
    float q = e[0].salary;
    float z = hike(p,r,q);
    printf("the hike:%f \n",z);
    strcpy(e[1].name,"dhruv");
    printf("enter the employee number , age , date of joining, salary of dhruv:");
    scanf("%d %d %d %f",&e[1].empno,&e[1].age,&e[1].doj,&e[1].salary);
    int E =e[1].age;
    int T = e[1].doj;
    float U = e[1].salary;
    float I = hike(E,T,U);
    printf("the hike:%f \n",I);
}
float hike(int x,int y,float A){
    int w = 55 - y;
    for(int i=0;i<w;i++){
    float c = (20*A)/100;
    A = A + c;
    }
    return(A);
}