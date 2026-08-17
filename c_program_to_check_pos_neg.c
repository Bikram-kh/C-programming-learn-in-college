#include <stdio.h>
int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d",&a);
    if(a < 0)
    {
        printf("The given number is negative");
    }
    else
    {
        printf("The given number is positive");
    }
}