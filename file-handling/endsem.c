#include <stdio.h>

int main() {
    FILE *fp2;
    fp2 = fopen("emp.txt", "w");  // Open file in write mode
    if (fp2 == NULL) {  // Check if the file was successfully opened
        printf("Error opening file!\n");
        return 1;
    }
    
    char name[50];  // Use a character array to store the name
    int age;
    int salary;
    
    printf("Enter person info:\n");
    printf("Name: ");
    scanf("%s", name);  // Use scanf to read the name
    
    printf("Age: ");
    scanf("%d", &age);
    
    printf("Salary: ");
    scanf("%d", &salary);
    
    // Write data to file using fprintf
    fprintf(fp2, "Name: %s\n", name);
    fprintf(fp2, "Age: %d\n", age);
    fprintf(fp2, "Salary: %d\n", salary);
    
    fclose(fp2);  // Close the file after writing
    printf("Data written to emp.txt successfully.\n");
    
    return 0;
}
