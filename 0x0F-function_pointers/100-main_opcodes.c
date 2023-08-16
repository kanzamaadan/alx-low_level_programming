#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of the main function.
 * @bytes: Number of bytes to print.
 */
void print_opcodes(int bytes)
{
int i;
unsigned char *main_ptr = (unsigned char *)print_opcodes;

for (i = 0; i < bytes; i++)
{
printf("%02x", *(main_ptr + i));
if (i != bytes - 1)
printf(" ");
}
printf("\n");
}

/**
 * main - Entry point.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int bytes;

if (argc != 2)
{
printf("Error\n");
return (1);
}

bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
return (2);
}

print_opcodes(bytes);

return (0);
}
