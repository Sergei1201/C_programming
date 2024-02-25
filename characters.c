#include <stdio.h>
#include <string.h>

// Function forward declaration
void greetings(char *first_name, char *last_name);

int main()
{
    char first_name[20];
    char last_name[20];
    int character_count = 0;
    printf("Enter the first name please: ");
    scanf("%19s", first_name);
    printf("Enter the last name please: ");
    scanf("%19s", last_name);
    greetings(first_name, last_name);
    // while (first_name[character_count] != '\0')
    // {
    //     character_count++;
    // }
    character_count = strlen(first_name);
    printf("First name's character count is %d\n ", character_count);

    return 0;
}

// Function definition
void greetings(char *first_name, char *last_name)
{
    printf("Greetings %s %s\n", first_name, last_name);
}