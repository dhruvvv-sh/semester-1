#include <stdio.h>
int main(){
    struct student{
        char name[20];
        float gpa;
        char class;
    };
    struct student s[3];
    printf("enter the student details:\n");
    for(int i=0;i<3;i++){
        printf("enter name:");
        scanf("%s",s[i].name);
        printf("enter gpa:");
        scanf("%f",&s[i].gpa);
        printf("enter class:");
        printf("Enter class (A/B/C): ");
        scanf("%c", &s[i].class);
    }
    printf("section wise:\n");
    for(int i=0;i<3;i++){
        if(s[i].class=='A'){
            printf("for A section:\n");
            printf("name:%s,gpa:%f",s[i].name,s[i].gpa);
        }
        if(s[i].class=='B'){
            printf("for A section:\n");
            printf("name:%s,gpa:%f",s[i].name,s[i].gpa);
        }
        if(s[i].class=='C'){
            printf("for A section:\n");
            printf("name:%s,gpa:%f",s[i].name,s[i].gpa);
        }
    }
}