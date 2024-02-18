#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Number
 * @index: The index, starting from 0, of the bit to retrieve
 * Return: Value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{

/* Check if index is within range */
if (index > sizeof(unsigned long int) * 8 - 1)
return (-1);

/* Shift n to the right by index positions */
n >>= index;

/* Retrieve the least significant bit after shifting */
return (n & 1);
}
