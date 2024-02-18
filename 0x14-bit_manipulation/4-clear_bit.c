#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to an unsigned long int
 * @index: Index of the bit to clear (starting from 0)
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;
/* Check if index is within range */
if (index > sizeof(unsigned long int) * 8 - 1)
return (-1);

/* Create a mask with the bit at index set to 1 */
mask = 1 << index;

/* Clear the bit at index to 0 using bitwise AND with complement */
*n &= ~mask;

return (1);
}
