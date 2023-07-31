#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints sum of 2 diagonals of square matrix of integers.
 * @a: Pointer to the square matrix of integers.
 * @size: Size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - i - 1)];
}

printf("%d, %d\n", sum1, sum2);
}
