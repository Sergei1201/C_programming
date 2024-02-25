#include <stdio.h>

int main()
{
    int result, y, x;
    printf("Enter the first number please: ");
    scanf("%d", &x);
    printf("Enter the seconde number please: ");
    scanf("%d", &y);
    result = x <= y ? x : y;
    printf("The min number is %d\n", result);
    return 0;
}