#include <stdio.h>
#include <string.h>
int main()
{
  char str[100], copy[100];
  int i, length = 0;

  printf("Enter a string:");
  scanf("%s", str);

  printf("Length using library function = %d\n", strlen(str));

  for(i=0;str[i] !='\0';i++)
{
  length++;
}

  printf("Length using user-defined method = %d\n", length);

  strcpy(copy, str);
  printf("Copy using library function = %s\n", copy);

  return 0;
}
