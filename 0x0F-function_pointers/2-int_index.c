#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the function used for comparison.
 *
 * Return: Index of the first matching element, or -1 if no match.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

/* Check if array and cmp are not NULL, and size is positive */
if (array != NULL && cmp != NULL && size > 0)
{
/* Iterate through each element of the array */
for (i = 0; i < size; i++)
{
/* If cmp function returns non-zero, return the current index */
if (cmp(array[i]) != 0)
return (i);
}
}

/* No match found or invalid input, return -1 */
return (-1);
}
