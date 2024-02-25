#include <stdio.h>

// Function prototyping & forward declaration

// Return factorial
unsigned long factorial(unsigned n);
// Print factorial
void print_factorial(unsigned num);

int main()
{
    unsigned int number;
    printf("Enter a number please: ");
    scanf("%d", &number);
    printf("The factorial of %d is %ld\n", number, factorial(number));
    print_factorial(number);
    return 0;
}

// Function definition
unsigned long factorial(unsigned n)
{
    unsigned long result = 1;
    for (int i = n; i > 1; i--)
    {
        result *= i;
    }
    return result;
}
void print_factorial(unsigned num)
{
    printf("The factorial of %d is %ld\n", num, factorial(num));
}