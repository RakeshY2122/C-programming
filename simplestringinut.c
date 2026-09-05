#include <stdio.h>
#include <string.h>

int main()
{
    int a = 0;
    char grade = '\0';
    char name[50] = "";  // Increased size
    
    printf("Entering the value: ");
    scanf("%d", &a);
    
    printf("Enter the character: ");
    scanf(" %c", &grade);  // Space before %c to consume newline


    getchar();  // Consume the newline this is imp t put for fegets 

    printf("Enter the name: ");
    // scanf("%s", name);  // name is already an array, so no & needed
    // this scanf will not read the word after space 
    fgets(name, sizeof(name), stdin);
    // fgets means file gets string and stdin means standard input 
    name[strlen(name) - 1] = '\0'; // this remove the newline space 

    printf("\n--- Output ---\n");
    printf("Value: %d\n", a);
    printf("Character: %c\n", grade);

    printf("Name: %s\n", name);
    
    return 0;
}