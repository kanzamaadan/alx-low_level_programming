#include "main.h"

/**
 * _pow_recursion - this returns the value of x raised to the power of y.
 * @x: The base.
 * @y: The exponent.
 *
 * Return: If y is lower than 0, the function returns -1.
 * Otherwise, it returns the result of x
 * raised to the power of y using recursion.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);

return (x * _pow_recursion(x, y - 1));
}
