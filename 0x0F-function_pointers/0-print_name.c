#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a specified function.
 * @name: Pointer to the name to be printed.
 * @f: Pointer to a function that prints the name.
 *
 * This function takes a character array pointer @name & a function pointer @f
 * as parameters. It checks if @name and @f are not NULL, and if so, it invokes
 * function pointed to by @f, passing @name as its argument.
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
