#include <stdio.h>

struct Product
{
    int productId;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Product p;

    printf("Enter Product ID: ");
    scanf("%d", &p.productId);

    printf("Enter Product Name: ");
    scanf("%s", p.name);

    printf("Enter Quantity: ");
    scanf("%d", &p.quantity);

    printf("Enter Price: ");
    scanf("%f", &p.price);

    printf("\nProduct Inventory Details\n");
    printf("Product ID = %d\n", p.productId);
    printf("Product Name = %s\n", p.name);
    printf("Quantity = %d\n", p.quantity);
    printf("Price = %.2f\n", p.price);
    printf("Total Value = %.2f\n", p.quantity * p.price);

    return 0;
}
