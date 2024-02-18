#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to an unsigned long int
 * @index: Index of the bit to set (starting from 0)
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;
/* Check if index is within range */
if (index > sizeof(unsigned long int) * 8 - 1)
return (-1);

/* Create a mask with the bit at index set to 1 */
mask = 1 << index;

/* Set the bit at index to 1 using bitwise OR */
*n |= mask;

return (1);
}
