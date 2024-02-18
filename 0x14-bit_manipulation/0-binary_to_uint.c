#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 * Return: converted number, or 0 if there's invalid character or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int k;
int len, bin;

/* Check if the input string is NULL */
if (!b)
return (0);

/* Initialize the result to 0 */
k = 0;

/* Get the length of the input string */
len = strlen(b);

/* Iterate through the input string from right to left */
for (len--, bin = 1; len >= 0; len--, bin *= 2)
{
/* If the current character is not '0' or '1', return 0 */
if (b[len] != '0' && b[len] != '1')
return (0);

/* If current character is '1', add corresponding value to result */
if (b[len] & 1)
k += bin;
}

/* Return the converted number */
return (k);
}
