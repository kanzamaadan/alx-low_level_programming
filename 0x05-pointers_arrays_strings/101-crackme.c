#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
if (argc == 2)
{
int sum = 0;

for (int i = 0; argv[1][i]; i++)
sum += argv[1][i];

if (sum == 2772)
printf("Tada! Congrats\n");
else
printf("Try again.\n");
}
else
{
printf("Usage: %s PASSWORD\n", argv[0]);
return (1);
}

return (0);
}
