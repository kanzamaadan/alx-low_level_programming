#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip to get from
 * one number to another.
 * @n: Number 1
 * @m: Number 2
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int nbits = 0;

/* XOR operation to find differing bits */
unsigned long int diff = n ^ m;

/* Counting the number of set bits in the XOR result */
while (diff)
{
nbits += diff & 1;
diff >>= 1;
}

return (nbits);
}
