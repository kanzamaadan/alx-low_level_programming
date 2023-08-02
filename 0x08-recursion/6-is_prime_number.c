#include "main.h"

int is_prime_helper(int n, int i);

/**
 * is_prime_number - Checks if a number is prime using recursion.
 * @n: The number to be checked.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Helper function to check if a number is prime.
 * @n: The number to be checked.
 * @i: The divisor to check if n is divisible by.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_helper(int n, int i)
{
if (n % i == 0)
return (0);
if (i * i > n)
return (1);
return (is_prime_helper(n, i + 1));
}
