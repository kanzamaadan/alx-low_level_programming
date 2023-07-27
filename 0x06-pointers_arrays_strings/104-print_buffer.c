#include "main.h"
#include <stdio.h>

void print_buffer(char *b, int size)
{
int i, j;
char c;

for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);

for (j = 0; j < 10; j++)
{
if (i + j < size)
printf("%02x", b[i + j]);
else
printf("  ");

if (j % 2)
printf(" ");
}

for (j = 0; j < 10; j++)
{
if (i + j >= size)
break;

c = b[i + j];
if (c >= 32 && c <= 126)
printf("%c", c);
else
printf(".");
}

printf("\n");
}

if (size <= 0)
printf("\n");
}
