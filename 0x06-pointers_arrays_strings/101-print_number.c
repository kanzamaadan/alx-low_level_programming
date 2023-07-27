#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
int divisor = 1;
int digit;
int num = n;

if (n < 0)
{
_putchar('-');
num = -num;
}

while (num / divisor > 9)
divisor *= 10;

while (divisor != 0)
{
digit = num / divisor;
_putchar(digit + '0');
num %= divisor;
divisor /= 10;
}
}
