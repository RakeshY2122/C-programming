#include<stdio.h>
#include<string.h>

int main()
{
    int num1=0, num2=0;
    char ca=' ';

    printf("Enter the first number:\n");
    scanf("%d", &num1);

    printf("Enter the calculation to perform (+, -, /, *):\n");
    scanf(" %c", &ca);  // Space before %c to skip whitespace
    
    printf("Enter the second number:\n");
    scanf("%d", &num2);
    
    switch (ca)
    {
        case '+':
        {
            int add = num1 + num2;
            printf("The add value is: %d\n", add);
            break;
        }
        case '-':
        {
            int sub = num1 - num2;
            printf("The subtract value is: %d\n", sub);
            break;
        }
        case '*':
        {
            int mul = num1 * num2;
            printf("The multiply value is: %d\n", mul);
            break;
        }
        case '/':
        {
            if(num2 != 0) {
                float div = (float)num1 / num2;
                printf("The divide value is: %.2f\n", div);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        }
        default:
            printf("Invalid operator!\n");
            break;
    }
    
    return 0;
}