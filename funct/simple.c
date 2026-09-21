#include <stdio.h>

void sum()
{
    int x = 0, y = 0;

    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    int add = x + y;
    printf("The value is: %d\n", add);
}

int main()
{
    sum();
    return 0;
}