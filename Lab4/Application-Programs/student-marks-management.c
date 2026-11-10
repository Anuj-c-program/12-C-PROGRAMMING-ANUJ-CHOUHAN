#include <stdio.h>
int main()
{
  int roll, i, marks[5], total = 0;
  float average;

  printf("Enter Roll Number:");
  scanf("%d", &roll);

  printf("Enter marks of 5 subjects:\n");
  for(i=0;i<5;i++)
{
   scanf("%d", &marks[i]);
   total = total + marks[i];
}
average = total/5.0;

printf("\n--- Student Result ---\n");
printf("Roll Number = %d\n", roll);
printf("Total Marks = %d\n", total);
printf("Average = %.2f\n", average);

if(average>=75)
  printf("Grade = A");
else if(average>=60)
  printf("Grade = B");
else if(average>=40)
  printf("Grade = C");
else
  printf("Grade = Fail");
return 0;
}
