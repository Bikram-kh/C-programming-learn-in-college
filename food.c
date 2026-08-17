#include <stdio.h>
int main()
{
    int product, quantity;
    float price, total;
    printf("------product details------\n");
    printf("1 - noodle -120\n2- fried rice - 100\n3-fried chicken - 250\n4 -- momo -- 100\n5 -- chicken soap--90\n");
    printf("Enter product ID: ");
    scanf("%d", &product);
    switch (product)
    {
    case 1:
        price = 120;

        break;
    case 2:
    price = 100;
        break;
    case 3:
        price = 250;
        break;
    case 4:
        price = 100;
        break;
    case 5:
        price = 90;
        break;
    default:
        printf("Invalid product ID\n");
        return 1;
    }
    printf("Enter quantity: ");
    scanf("%d", &quantity);
    total = price * quantity;
    printf("Total price: %.2f\n", total);
    return 0;
}
