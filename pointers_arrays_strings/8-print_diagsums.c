#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
    int i;
    int sum_main;
    int sum_second;

    for (i = 0; i < size; i++)
    {
        sum_main = sum_main + a[(size * i) + i];
        sum_second = sum_second + a[i * size + (size - 1 - i)];
    }
    
    printf("%d, %d\n", sum_main, sum_second);
}
