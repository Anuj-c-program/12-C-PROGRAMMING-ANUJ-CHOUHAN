#include <stdio.h>

// Call by Value
void callByValue(int x)
{
    x = x + 10;
    printf("Inside Call by Value = %d\n", x);
}

// Call by Reference
void callByReference(int *x)
{
    *x = *x + 10;
    printf("Inside Call by Reference = %d\n", *x);
}

int main()
{
    int a = 20, b = 20;

    printf("Original value of a = %d\n", a);
    callByValue(a);
    printf("After Call by Value = %d\n", a);

    printf("\nOriginal value of b = %d\n", b);
    callByReference(&b);
    printf("After Call by Reference = %d\n", b);

    return 0;
}#include <stdio.h>

// Call by Value
void callByValue(int x)
{
    x = x + 10;
    printf("Inside Call by Value = %d\n", x);
}

// Call by Reference
void callByReference(int *x)
{
    *x = *x + 10;
    printf("Inside Call by Reference = %d\n", *x);
}

int main()
{
    int a = 20, b = 20;

    printf("Original value of a = %d\n", a);
    callByValue(a);
    printf("After Call by Value = %d\n", a);

    printf("\nOriginal value of b = %d\n", b);
    callByReference(&b);
    printf("After Call by Reference = %d\n", b);

    return 0;
}#include <stdio.h>

// Call by Value
void callByValue(int x)
{
    x = x + 10;
    printf("Inside Call by Value = %d\n", x);
}

// Call by Reference
void callByReference(int *x)
{
    *x = *x + 10;
    printf("Inside Call by Reference = %d\n", *x);
}

int main()
{
    int a = 20, b = 20;

    printf("Original value of a = %d\n", a);
    callByValue(a);
    printf("After Call by Value = %d\n", a);

    printf("\nOriginal value of b = %d\n", b);
    callByReference(&b);
    printf("After Call by Reference = %d\n", b);

    return 0;
}
