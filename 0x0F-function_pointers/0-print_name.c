#include "function_pointers.h"

/**
 * print_name - Prints a name using a provided function
 * @name: The name to be printed
 * @f: Function pointer to the printing function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);  /* Call the function pointed by f with the given name */
}
