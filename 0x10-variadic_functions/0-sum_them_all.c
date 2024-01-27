#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of its parameters.
 * @n: Number of arguments.
 * Return: Sum of the arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list args;  /* Declare a va_list to handle variable arguments.*/

if (n == 0)
{
return (0);  /* Special case: if n is 0, return 0.*/
}

va_start(args, n);  /* Initialize the va_list with n.*/

for (i = 0; i < n; i++)
{
sum += va_arg(args, int);  /* Accumulate the sum of arguments.*/
}

va_end(args);  /* Clean up the va_list.*/

return (sum);  /* Return the calculated sum.*/
}
