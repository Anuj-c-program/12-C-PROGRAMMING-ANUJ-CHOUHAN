#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    return (float)a / b;
}

int main()
{
    int a, b, choice;

    do
    {
        printf("\nMenu-Driven Calculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 4)
        {
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
        }

        switch(choice)
        {
            case 1:
                printf("Result = %d", add(a, b));
                break;

            case 2:
                printf("Result = %d", subtract(a, b));
                break;

            case 3:
                printf("Result = %d", multiply(a, b));
                break;

            case 4:
                if(b != 0)
                    printf("Result = %.2f", divide(a, b));
                else
                    printf("Division by zero is not possible");
                break;

            case 5:
                printf("Calculator Closed");
                break;

            default:
                printf("Invalid Choice");
        }

    } while(choice != 5);

    return 0;
}
