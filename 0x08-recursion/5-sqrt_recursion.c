#include "main.h"

int sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - Returns natural square root of number using recursion.
 * @n: The input number.
 *
 * Return: natural square root, or -1 number doesn't have natural square root.
 */
int _sqrt_recursion(int n)
{
return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - Helper function to find the square root.
 * @n: The input number.
 * @i: The potential square root.
 *
 * Return: natural square root, o1 number doesn't have natural square root.
 */
int sqrt_helper(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (sqrt_helper(n, i + 1));
}
