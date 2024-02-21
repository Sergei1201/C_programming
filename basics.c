#include <stdio.h>
#include <math.h>

// Function prototype & forward declaration
double circle_square(double *radius);

int main()
{
    double radius;
    double square;
    printf("Enter a radius of a circle: ");
    scanf("%lf", &radius);

    square = circle_square(&radius);

    printf("The square of the circle is going to be: %lf\n", square);

    return 0;
}

// Function definition
double circle_square(double *radius)
{
    const double pi = 3.14;
    return pi * *radius * *radius;
}