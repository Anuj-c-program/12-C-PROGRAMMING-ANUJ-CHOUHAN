#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    int rollNumbers[3] = {101, 102, 103};
    struct Student s[3] = {
        {101, "Anuj", 85.5},
        {102, "Rahul", 90.0},
        {103, "Aman", 78.5}
    };

    int i;

    printf("Records Using Arrays\n");

    for(i = 0; i < 3; i++)
    {
        printf("Roll Number = %d\n", rollNumbers[i]);
    }

    printf("\nRecords Using Structures\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number = %d\n", s[i].rollNo);
        printf("Name = %s\n", s[i].name);
        printf("Marks = %.2f\n", s[i].marks);
    }

    return 0;
}
