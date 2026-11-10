#include <stdio.h>

struct Book
{
    int bookId;
    char title[50];
    char author[50];
    float price;
};

int main()
{
    struct Book b[100];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Book %d Details\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &b[i].bookId);

        printf("Enter Book Title: ");
        scanf(" %[^\n]", b[i].title);

        printf("Enter Author Name: ");
        scanf(" %[^\n]", b[i].author);

        printf("Enter Book Price: ");
        scanf("%f", &b[i].price);
    }

    printf("\n--- Library Book Records ---\n");

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID = %d\n", b[i].bookId);
        printf("Title = %s\n", b[i].title);
        printf("Author = %s\n", b[i].author);
        printf("Price = %.2f\n", b[i].price);
    }

    return 0;
}
