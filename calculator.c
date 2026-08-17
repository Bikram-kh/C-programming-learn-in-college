#include <stdio.h>
int main()
{
    
    int choice,a,b,result;
    float c;
    printf("Enter any two value: ");
    scanf("%d%d",&a,&b);
    printf("Enter\n 1 for addition \n 2 for subtraction\n 3 for multiplication\n 4 for diviusion\n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        result = a + b;
        printf("%d+%d=%d",a,b,result);
            /* code */
            break;
        case 2:
        result = a - b;
        printf("%d-%d=%d",a,b,result);
            break;
        case 3:
        result = a * b;
        printf("%d*%d=%d",a,b,result);
            break;
        case 4:
        c = (float)a/b;
        printf("%d/%d=%.2f",a,b,c);
        break;

        default:
        printf("wrong option");
            

        
    }


}