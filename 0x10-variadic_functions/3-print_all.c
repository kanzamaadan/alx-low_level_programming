#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_all - Prints anything based on the format string.
 * @format: String representing the types of arguments.
 */
void print_all(const char * const format, ...)
{
va_list args;  /* Declare a va_list to handle variable arguments*/
char *separator = "";  /* Initialize separator as an empty string.*/
char *str;
char *current_format;

va_start(args, format);  /* Initialize the va_list with format.*/

current_format = (char *)format;
/* Non-constant pointer to iterate through the format string.*/

while (current_format && *current_format)
{
if (*current_format == 'c')
{
printf("%s%c", separator, va_arg(args, int));
}
else if (*current_format == 'i')
{
printf("%s%d", separator, va_arg(args, int));
}
else if (*current_format == 'f')
{
printf("%s%f", separator, va_arg(args, double));
}
else if (*current_format == 's')
{
str = va_arg(args, char *);

if (str == NULL)
{
printf("%s(nil)", separator);
}
else
{
printf("%s%s", separator, str);
}
}

separator = ", ";  /* Update separator for subsequent values.*/
current_format++;
}

va_end(args);  /* Clean up the va_list.*/
printf("\n");  /* Print a new line at the end.*/
}
