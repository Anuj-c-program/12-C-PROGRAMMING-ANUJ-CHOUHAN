#include <stdio.h>

// Factorial using iteration
int factorialIterative(int n)
{
    int i, fact = 1;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

// Factorial using recursion
int factorialRecursive(int n)
{
    if(n == 0)
        return 1;

    return n * factorialRecursive(n - 1);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Enter a non-negative number");
    }
    else
    {
        printf("Factorial using Iteration = %d\n",
               factorialIterative(n));

        printf("Factorial using Recursion = %d",
               factorialRecursive(n));
    }

    return 0;
}
