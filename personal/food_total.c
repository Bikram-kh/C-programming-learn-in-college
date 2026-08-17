#include <stdio.h>

int main()
{
    int product, quantity, i, n;
    float price, total = 0;

    printf("How many products do you want to buy? ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\n------product details------\n");
        printf("1 - noodle - 120\n");
        printf("2 - fried rice - 100\n");
        printf("3 - fried chicken - 250\n");
        printf("4 - momo - 100\n");
        printf("5 - chicken soup - 90\n");

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
            i--;
            continue;
        }

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        total += price * quantity;
    }

    printf("\nTotal price: %.2f\n", total);
    return 0;
}
// Iteration 1: i = 1, Check: 1 <= 5? YES (true)  → run body, then i++ → i becomes 2
// Iteration 2: i = 2, Check: 2 <= 5? YES (true)  → run body, then i++ → i becomes 3
// Iteration 3: i = 3, Check: 3 <= 5? YES (true)  → run body, then i++ → i becomes 4
// Iteration 4: i = 4, Check: 4 <= 5? YES (true)  → run body, then i++ → i becomes 5
// Iteration 5: i = 5, Check: 5 <= 5? YES (true)  → run body, then i++ → i becomes 6
//            i = 6, Check: 6 <= 5? NO (false)   → STOP! Exit loop