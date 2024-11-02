#include <stdio.h>
#include <string.h> // for strcpy

struct student {  // structure for student record
    char name[20];
    int roll;
    float m1, m2, m3;
};
int main() {
    struct student s[3]; // array of 3 students
    float avg[3];        // array to store averages
    float temp_avg;
    struct student temp;

    // Input for first student
    strcpy(s[0].name, "Dhruv");
    s[0].roll = 23;
    printf("Enter marks for Dhruv (subject 1, subject 2, subject 3): ");
    scanf("%f %f %f", &s[0].m1, &s[0].m2, &s[0].m3);
    avg[0] = (s[0].m1 + s[0].m2 + s[0].m3) / 3;

    // Input for second student
    strcpy(s[1].name, "Soham");
    s[1].roll = 21;
    printf("Enter marks for Soham (subject 1, subject 2, subject 3): ");
    scanf("%f %f %f", &s[1].m1, &s[1].m2, &s[1].m3);
    avg[1] = (s[1].m1 + s[1].m2 + s[1].m3) / 3;

    // Input for third student
    strcpy(s[2].name, "Arhant");
    s[2].roll = 31;
    printf("Enter marks for Arhant (subject 1, subject 2, subject 3): ");
    scanf("%f %f %f", &s[2].m1, &s[2].m2, &s[2].m3);
    avg[2] = (s[2].m1 + s[2].m2 + s[2].m3) / 3;

    // Sorting students based on their average marks
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 - i - 1; j++) {
            if (avg[j] > avg[j + 1]) {
                // Swap averages
                temp_avg = avg[j];
                avg[j] = avg[j + 1];
                avg[j + 1] = temp_avg;

                // Swap student records to keep them aligned with averages
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    // Display sorted students by average
    printf("\nStudents sorted by average marks:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Roll: %d, Avg Marks: %.2f\n", s[i].name, s[i].roll, avg[i]);
    }   
    return 0;
}
