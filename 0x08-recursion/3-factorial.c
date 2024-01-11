#include "main.h"

/**
 * factorial - function that returns the factorial of a given numbre
 * @n: the given number.
 *
 * Return: -1 if n less than 0, and 1 is n = 0,
 *	otherwise it returns the factorial
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}

return (n * factorial(n - 1));
}
