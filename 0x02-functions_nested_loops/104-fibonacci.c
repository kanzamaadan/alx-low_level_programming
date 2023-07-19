#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, fib3;
	int count;

	printf("%lu, %lu", fib1, fib2);

	for (count = 3; count <= 98; count++)
	{
		fib3 = fib1 + fib2;
		printf(", %lu", fib3);

		fib1 = fib2;
		fib2 = fib3;
	}

	printf("\n");

	return (0);
}
