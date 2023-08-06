#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments (including the program name)
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 (Success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
int i;
int sum = 0;

if (argc < 2)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
int num = atoi(argv[i]);

if (num == 0 && argv[i][0] != '0')
{
printf("Error\n");
return (1);
}
sum += num;
}

printf("%d\n", sum);
return (0);
}
