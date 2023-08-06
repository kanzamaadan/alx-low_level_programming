#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void)argv;

for (int i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
