#include <stdio.h>

int findGCD(int a, int b)
{
    int i, gcd = 1;

    for(i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    return gcd;
}

int main()
{
    int a, b, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    gcd = findGCD(a, b);
    lcm = (a * b) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d", lcm);

    return 0;
}
