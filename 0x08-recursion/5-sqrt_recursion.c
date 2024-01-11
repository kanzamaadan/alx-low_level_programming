#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number.
 *
 * Return: Natural square root of n or -1 if n is negative.
 * If n does not have a natural square root, the function returns -1.
 * Otherwise, it returns the natural square root of n using recursion.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else if (n == 0 || n == 1)
return (n);

return (find_sqrt(n, 2));
}

/**
 * find_sqrt - Helper function to find the natural square root recursively.
 * @n: The number.
 * @i: The current value to check for the square root.
 *
 * Return: Natural square root of n or -1 if not found.
 */
int find_sqrt(int n, int i)
{
if (i * i == n)
return (i);
else if (i * i > n)
return (-1);

return (find_sqrt(n, i + 1));
}
