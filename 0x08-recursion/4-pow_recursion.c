#include "main.h"

/**
 * _pow_recursion - Returns value of x raised to power of y using recursion.
 * @x: The base.
 * @y: The exponent.
 *
 * Return: The value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);

if (y == 0)
return (1);

return (x * _pow_recursion(x, y - 1));
}
