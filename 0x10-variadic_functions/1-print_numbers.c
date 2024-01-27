#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: String to be printed between numbers (if not NULL).
 * @n: Number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;  /* Declare a va_list to handle variable arguments.*/
unsigned int i;

va_start(args, n);  /* Initialize the va_list with n.*/

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));  /* Print the current integer.*/

if (i < n - 1 && separator != NULL)
{
printf("%s", separator);  /* Print the separator if not the last integer.*/
}
}

va_end(args);  /* Clean up the va_list.*/

printf("\n");  /* Print a new line at the end.*/
}
