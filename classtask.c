#include <stdio.h>

int main()
{
    int rollnumber;
    char name[50];
    char address[100];
    float average;
    int age;
    double collegefee;

    printf("Enter the roll number: ");
    scanf("%d", &rollnumber);

    printf("Enter the name: ");
    scanf("%s", name);

    printf("Enter the address: ");
    scanf("%s", address);

    printf("Enter the average score: ");
    scanf("%f", &average);

    printf("Enter the age: ");
    scanf("%d", &age);

    printf("Enter the college fee: ");
    scanf("%lf", &collegefee);

    printf("\nThe roll no is: %d\n", rollnumber);
    printf("The name is: %s\n", name);
    printf("The location is: %s\n", address);
    printf("The average score is: %.2f\n", average);
    printf("The age is: %d\n", age);
    printf("The college fee is: %.2lf\n", collegefee);

    return 0;
}