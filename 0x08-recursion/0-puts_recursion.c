#include "main.h"

/**
 * _puts_recursion: function that prints a string, followed by a new line.
 * @s : The input string to be printed
*/
void _puts_recursion(char *s)
{
/* base case : for checking for the null terminator */
if (*s == '\0')
{
/* if that is true it print a new line  */
_putchar('\n');
return;
}
/* print the first (current) character first*/
_putchar(*s);
/* then it make a recursive call with the rest of the string */
_puts_recursion(s + 1);
}
