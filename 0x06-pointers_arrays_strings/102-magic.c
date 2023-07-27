#include "main.h"

/**
 * main - prints a[2] = 98, followed by a new line
 *
 * Return: Always 0.
 */
int main(void)
{
int a[5] = {98, 402, 198, 298, 1024};
int i;
char *p;

p = (char *)a;
i = 0;
while (i < (int)(sizeof(a) / sizeof(int)))
{
_putchar(*p);
p += sizeof(int);
i++;
}
_putchar('\n');


_putchar('a');
_putchar('[');
_putchar('2');
_putchar(']');
_putchar(' ');
_putchar('=');
_putchar(' ');
_putchar('b');
_putchar('\n');


return (0);
}
