#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: command line arguments
 * Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
int i = 1;
int result = 0;

if (argc == 1)
{
printf("%d\n", 0);
return (0);
}

while (i < argc)
{
char *current_arg = argv[i];

while (*current_arg)
{
if (*current_arg < '0' || *current_arg > '9')
{
printf("%s\n", "Error");
return (1);
}
current_arg++;
}

result += atoi(argv[i]);
i++;
}

printf("%d\n", result);

return (0);
}
