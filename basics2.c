#include <stdio.h>
#include <math.h>

// Function prototyping & forward declaration
void greetings(char *first_name, char *last_name);

int main()
{
    char first_name[20];
    char last_name[20];
    printf("Enter your first name please: ");
    scanf("%s", first_name);
    printf("Enter your last name please: ");
    scanf("%s", last_name);
    greetings(first_name, last_name);

    return 0;
}

void greetings(char *first_name, char *last_name)
{
    printf("Greetings %s %s\n", first_name, last_name);
}
// Function definition