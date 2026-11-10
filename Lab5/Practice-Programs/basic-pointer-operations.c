#include <stdio.h>

int main()
{
    int num = 10;
    int *ptr;

    ptr = &num;

    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", (void*)&num);
    printf("Value of ptr = %p\n", (void*)ptr);
    printf("Value using pointer = %d\n", *ptr);

    *ptr = 20;

    printf("Updated value of num = %d", num);

    return 0;
}
