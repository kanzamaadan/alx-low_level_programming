#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: String to be printed between strings (if not NULL).
 * @n: Number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;  /* Declare a va_list to handle variable arguments.*/
unsigned int i;

va_start(args, n);  /*Initialize the va_list with n.*/

for (i = 0; i < n; i++)
{
char *current_str = va_arg(args, char *);  /* Get the current string.*/

if (current_str == NULL)
{
printf("(nil)");  /* Print "(nil)" if the string is NULL.*/
}
else
{
printf("%s", current_str);  /* Print the current string.*/

if (i < n - 1 && separator != NULL)
{
printf("%s", separator);  /* Print the separator if not the last string.*/
}
}
}

va_end(args);  /* Clean up the va_list.*/

printf("\n");  /* Print a new line at the end.*/
}
