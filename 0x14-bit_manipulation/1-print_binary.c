#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Number in base 10
 * Return: void
 */
void print_binary(unsigned long int n)
{
/* If n is greater than 0 */
if (n >> 0)
{
/* Recursively call print_binary with n shifted to the right by 1 */
if (n >> 1)
print_binary(n >> 1);
/* Print the least significant bit of n */
_putchar((n & 1) + '0');
}
else
{
/* If n is 0, print 0 */
_putchar('0');
}
}
