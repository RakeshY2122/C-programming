#include <stdio.h>

int main()
{
    int i = 0, j = 0, a = 0, b = 0;
    char cd = '\0';

    printf("Enter the number of columns: ");
    scanf("%d", &a);

    printf("Enter the number of rows: ");
    scanf("%d", &b);

    printf("Enter the character you want to display: ");
    scanf(" %c", &cd);

    for (i = 0; i < b; i++)        
    {
        for (j = 0; j < a; j++)   
        {
            printf(" %c", cd);
        }
        printf("\n");
    }

    return 0;
}