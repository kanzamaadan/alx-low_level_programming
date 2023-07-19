#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, fib3;
	int i;

	printf("%lu, %lu", fib1, fib2);

	for (i = 2; i < 50; i++)
	{
		fib3 = fib1 + fib2;
		printf(", %lu", fib3);

		fib1 = fib;
		fib2 = fib3;
		printf}

("\n");

	return (0);
}
