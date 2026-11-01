#include <stdio.h>
int main()
{
  int a, b, sum, sub, multi, divison, mod;
  printf("Enter value of a and b :");
  scanf("%d %d", &a, &b);
  sum = a+b;
  sub = a-b;
  multi = a*b;
  division = a/b;
  mod = a%b;
printf("Sum = %d\n", sum);
printf("Subtract = %d\n", sub);
printf("Divide = %d\n", division);
printf("Remainder = %d\n", mod);
return 0;
}
