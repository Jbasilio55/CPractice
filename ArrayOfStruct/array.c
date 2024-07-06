#include <stdio.h>
#include <string.h>

struct Student
{
    char name[12];
    float gpa;
};

int main()
{
    struct Student student1 = {"Wilson", 3.0};
    struct Student student2 = {"Johnny", 3.4};
    struct Student student3 = {"Maria", 2.9};
    struct Student student4 = {"Samuel", 4.0};

    struct Student students[] = {student1, student2, student3, student4};

    int size = sizeof(students)/sizeof(students[0]);

    for(int i = 0; i < size; i++)
    {
        printf("\nStudent: %s | GPA: %.1f", students[i].name, students[i].gpa);
    }

    printf("\n");

    return 0;
}