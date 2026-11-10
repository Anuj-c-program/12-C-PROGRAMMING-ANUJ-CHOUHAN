#include <stdio.h>
int main()
{
  int a[2][2], b[2][2];
  int i, j, choice;

  printf("Enter first matrix:\n");
  for(i=0;i<2;i++)
{
  for(j=0;j<2;j++)
     scanf("%d", &a[i][j]);
}

   printf("Enter second matrix:\n");
   for(i=0;i<2;i++)
{
   for(j=0;j<2;j++)
      scanf("%d", &b[i][j]);
}

printf("\n1.Addition");
printf("\n2.Subtraction");
printf("\nEnter your choice:");
scanf("%d", &choice);

printf("\nResult:\n");
for(i=0;i<2;i++)
{
  for(j=0;j<2;j++)
{
   if(choice == 1)
     printf("%d ", a[i][j] + b[i][j]);
   else if(choice == 2)
     printf("%d ", a[i][j] - b[i][j]);
   else
{
     printf("Invalid choice");
     return 0;
}
}
printf("\n");
}
return 0;
}
