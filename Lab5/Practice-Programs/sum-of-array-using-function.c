#include <stdio.h>

int findSum(int arr[], int n)
{
    int i, sum = 0;

    for(i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int arr[100], n, i, sum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sum = findSum(arr, n);

    printf("Sum = %d", sum);

    return 0;
}      
