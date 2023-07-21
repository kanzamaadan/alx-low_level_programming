#include <stdio.h>

/**
 * main - Prints the largest prime factor of 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long n = 612852475143;
unsigned long largest = 0, i = 2;

while (n != 1)
{
if (n % i == 0)
{
largest = i;
n /= i;
}
else
{
i++;
}
}

printf("%lu\n", largest);
return (0);
}
