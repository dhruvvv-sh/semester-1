#include <stdio.h>

// Declared struct 
// for student
struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll = 166;
    s1.cgpa = 9.4;

    strcpy(s1.name,"dhruv"); //to store the name in the string
    printf("%d %f %s \n",s1.roll,s1.cgpa,s1.name);
    
    struct student s2;
    strcpy(s2.name,"ok");
    printf("%s",s2.name);

}