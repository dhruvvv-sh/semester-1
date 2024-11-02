#include <stdio.h>
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    // Declare array with 2 elements
    struct student ece[2] = {
        {23, 8.0, "ok"},  // ece[0]
        {24, 9.1, "John"} // ece[1]
    };

    // Access ece[0]
    printf("Student 1 Name: %s\n", ece[0].name);

    // Access ece[1] through pointer
    struct student *ptr = &ece[1];
    printf("Student 2 Name: %s\n", ptr->name);

    return 0;
}
