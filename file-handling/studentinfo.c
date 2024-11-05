#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fptr;
    fptr = fopen("studentinfo.txt","w");
    if(fptr==NULL){
        printf("no file");
        exit(0);
    }
    char name[10];
    int age;
    float cgpa;
    printf("enter your name:");
    scanf("%s",name);
    for(int i=0;name[i]!='\0';i++){
        if(97<=name[i]<=122){
            int z = name[i];
            name[i]=z-32;
        }
    }
    printf("enter age:");
    scanf("%d",&age);
    printf("enter cgpa:");
    scanf("%f",&cgpa);
    fprintf(fptr,"name:%s \n",name);
    fprintf(fptr, "Age: %d\n", age);
    fprintf(fptr, "CGPA: %.2f\n", cgpa);
    fputs(name,fptr);
    // Close the file
    fclose(fptr);

    printf("Data written to file successfully.\n");

    return 0;
}