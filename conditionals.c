#include <stdio.h>
#include <stdbool.h>

int main()
{
    int color;
    do
    {
        printf("Enter the number from 1 to 5 please: ");
        scanf("%d", &color);
        switch (color)
        {
        case 1:
            printf("The color is blue\n");
            break;
        case 2:
            printf("The color is red\n");
            break;
        case 3:
            printf("The color is black\n");
            break;
        case 4:
            printf("The color is yellow\n");
            break;
        case 5:
            printf("The color is white\n");
            break;
        default:
            printf("You have not chosen a valid color\n");
            break;
        }
    } while (color >= 1 && color <= 5);

    return 0;
}