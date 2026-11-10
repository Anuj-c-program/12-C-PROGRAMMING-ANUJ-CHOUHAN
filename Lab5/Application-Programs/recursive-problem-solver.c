#include <stdio.h>

int factorial(int n)
{
    if(n == 0)
        return 1;

    return n * factorial(n - 1);
}

int fibonacci(int n)
{
    if(n <= 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int sumDigits(int n)
{
    if(n == 0)
        return 0;

    return (n % 10) + sumDigits(n / 10);
}

int main()
{
    int choice, n, i;

    printf("Recursive Problem Solver\n");
    printf("1. Factorial\n");
    printf("2. Fibonacci Series\n");
    printf("3. Sum of Digits\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter a number: ");
    scanf("%d", &n);

    switch(choice)
    {
        case 1:
            if(n < 0)
                printf("Enter a non-negative number");
            else
                printf("Factorial = %d", factorial(n));
            break;

        case 2:
            if(n < 0)
                printf("Enter a non-negative number");
            else
            {
                printf("Fibonacci Series: ");
                for(i = 0; i < n; i++)
                    printf("%d ", fibonacci(i));
            }
            break;

        case 3:
            if(n < 0)
                n = -n;

            printf("Sum of Digits = %d", sumDigits(n));
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
