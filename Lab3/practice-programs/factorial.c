#include <stdio.h>
int main()
{
  int num, i, fact=1;
printf("Enter a number");
scanf("%d", &num);
for(i=1;i<=num;i++)
{
   fact = i*fact;
}
printf("Factorial = %d", fact);
return 0;
}
