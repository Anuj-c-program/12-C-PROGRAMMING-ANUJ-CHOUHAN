#include <stdio.h>

struct Student
{
    int rollNo;
    float marks;
    char grade;
};

union Data
{
    int rollNo;
    float marks;
    char grade;
};

int main()
{
    struct Student s;
    union Data u;

    printf("Structure Demonstration\n");

    s.rollNo = 101;
    s.marks = 85.5;
    s.grade = 'A';

    printf("Roll Number = %d\n", s.rollNo);
    printf("Marks = %.2f\n", s.marks);
    printf("Grade = %c\n", s.grade);
    printf("Size of Structure = %lu bytes\n", sizeof(s));

    printf("\nUnion Demonstration\n");

    u.rollNo = 101;

    printf("Roll Number = %d\n", u.rollNo);
    printf("Size of Union = %lu bytes\n", sizeof(u));

    return 0;
}
