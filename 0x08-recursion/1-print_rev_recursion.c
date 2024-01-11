#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse,
 * followed by a new line.
 * @s: the string to be printed
*/
void _print_rev_recursion(char *s)
{
/* base case : checks if the string in the null terminator*/
if (*s == '\0')
{
return;/*it will stop the recursion*/
}
else
{
_print_rev_recursion(s + 1);/* first move to next(next(next(..))) char*/
_putchar(*s);/* then print the string, and it is in reverse*/
}
}
