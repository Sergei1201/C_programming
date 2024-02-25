#include <stdio.h>

// Function forward declaration & prototyping
// void print_array(int arr[][], int size);

int main()
{
    int arr1[][9] = {
        {1, 2, 3, 4, 5, 6, 7, 70, 98},
        {10, 25, 30, 35, 39, 45, 46, 99, 100}};
    // int size = sizeof(arr1[0]) / sizeof(arr1[0][0]);
    // print_array(arr1, size);
    for (int i = 0; i < sizeof(arr1) / sizeof((arr1[0])); i++)
    {
        for (int j = 0; j < sizeof(arr1[0]) / sizeof(arr1[0][0]); j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

// Function definition
// void print_array(int arr[][], int size)
// {
//     // Printing a multidimensional array
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
// }