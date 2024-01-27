#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 success, 1 incorrect numb of arguments, 2 negative bytes.
 */
int main(int argc, char *argv[])
{
int num_bytes, i;

/* Check for the correct number of arguments */
if (argc != 2)
{
printf("Error\n");
return (1);
}

/* Convert number_of_bytes to an integer */
num_bytes = atoi(argv[1]);

/* Check if the number_of_bytes is non-negative */
if (num_bytes < 0)
{
printf("Error\n");
return (2);
}

/* Print the opcodes of the main function */
for (i = 0; i < num_bytes; i++)
{
printf("%02x", ((unsigned char *)main)[i]);
if (i < num_bytes - 1)
printf(" ");
}

/* Print a newline character at the end */
printf("\n");

return (0);
}
