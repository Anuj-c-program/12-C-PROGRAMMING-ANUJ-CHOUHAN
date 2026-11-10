#include <stdio.h>
int main()
{
  int a[5], i, j, temp, key, found = 0;
  printf("Enter 5 elements:\n");

  for(i=0;i<5;i++)
{
   scanf("%d", &a[i]);
}
printf("Enter element to search:");
scanf("%d", &key);

for(i=0;i<5;i++)
{
  if(a[i] == key)
{
   found = 1;
   break;
}
}
if(found == 1)
   printf("Element found before sorting\n");
else
   printf("Element not found before sorting\n");

for(i=0;i<4;i++)
{
  for(j=0;j<4;j++)
{
   if(a[j]>a[j+1])
{
    temp = a[j];
    a[j] = a[j+1];
    a[j+1] = temp;
}
}
}

found = 0;
for(i=0;i<5;i++)
{
  if(a[i] == key)
{
  found = 1;
  break;
}
}
if(found == 1)
   printf("Element found after sorting\n");
else 
   printf("Element not found after sorting\n");

printf("Sorted array:");

for(i=0;i<5;i++)
{
  printf("%d ", a[i]);
}
return 0;
}
  
     
