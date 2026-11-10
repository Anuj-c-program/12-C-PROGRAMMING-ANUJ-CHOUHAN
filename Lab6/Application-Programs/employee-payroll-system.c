#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float totalSalary;
};

int main()
{
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &e.basicSalary);

    e.hra = e.basicSalary * 0.20;
    e.da = e.basicSalary * 0.10;

    e.totalSalary = e.basicSalary + e.hra + e.da;

    printf("\nEmployee Payroll Details\n");
    printf("Employee ID = %d\n", e.id);
    printf("Employee Name = %s\n", e.name);
    printf("Basic Salary = %.2f\n", e.basicSalary);
    printf("HRA = %.2f\n", e.hra);
    printf("DA = %.2f\n", e.da);
    printf("Total Salary = %.2f\n", e.totalSalary);

    return 0;
}
