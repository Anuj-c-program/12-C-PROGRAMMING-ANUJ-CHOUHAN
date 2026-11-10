#include <stdio.h>

union Data
{
    int number;
    float marks;
    char grade;
};

int main()
{
    union Data d;

    printf("Union Demonstration\n");

    d.number = 100;
    printf("Integer Value = %d\n", d.number);

    d.marks = 85.5;
    printf("Float Value = %.2f\n", d.marks);

    d.grade = 'A';
    printf("Character Value = %c\n", d.grade);

    printf("Size of Union = %lu bytes", sizeof(d));

    return 0;
}
