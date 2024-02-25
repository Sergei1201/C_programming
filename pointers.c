#include <stdio.h>

int main()
{
    double size;
    double *p = &size;
    double **pp = &p;

    printf("Enter a size: ");
    scanf("%lf", &size);
    printf("The size is %lf ", size);
    printf("The memory address is %p ", p);
    *p = 16;
    printf("The value of the address %p is %lf ", p, size);
    printf("The second pointer is pointing to the address of %p", &p);
}