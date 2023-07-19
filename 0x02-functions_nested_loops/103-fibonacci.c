#include "main.h"
#include <stdio.h>

/**
 * main - finds and prints the sum of even-valued Fibonacci terms
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, fib3, sum = 2;

	while (fib2 <= 4000000)
	{
		fib3 = fib1 + fib2;
		if (fib3 % 2 == 0)
			sum += fib3;

		fib1 = fib2;
		fib2 = fib3;
	}

	printf("%lu\n", sum);

	return (0);
}
