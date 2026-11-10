#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  int choice;

  printf("Enter a string:");
  scanf("%s", str);

  printf("\n1. Find Length");
  printf("\n2. Reverse String");
  printf("\n3. Check Palindrome");
  printf("\n4Enter your choice:");
  scanf("%d", &choice);

  if(choice == 1)
{
  printf("Length = %d", strlen(str));
}
else if(choice == 2)
{
  printf("Reverse = ");
  for(int i = strlen(str)-1;i>=0;i--)
    printf("%c", str[i]);
}
else if(choice == 3)
{
  int i, flag = 0;
  int len = strlen(str);

  for(i=0;i<len/2;i++)
{
   if(str[i] != str[len-1-i])
{
    flag = 1;
    break;
}
}
  if(flag == 0)
    printf("Palindrome String");
  else
    printf("Not a Palindrome String");
      }
  else
      {
      printf("Invalid Choice");
      }
      return 0;
}
