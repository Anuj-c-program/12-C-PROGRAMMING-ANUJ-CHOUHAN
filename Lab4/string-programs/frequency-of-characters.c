#include <stdio.h>
int main()
{
  char str[100];
  int i, j, count;
  printf("Enter a string:");
  scanf("%s", str);

  for(i=0;str[i] !='\0';i++)
{
   count = 1;
   if(str[i] == ' ')
        continue;

   for(j=0;j<i;j++)
{
   if(str[i] == str[j])
          break;
}

if(j<i)
    continue;
 for(j=i+1;str[j] !='\0';j++)
{
   if(str[i] == str[j])
     count++;
}
printf("%c = %d\n", str[i], count);
}
return 0;
}
