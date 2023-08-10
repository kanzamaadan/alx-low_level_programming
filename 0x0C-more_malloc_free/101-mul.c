#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * main - Multiplies two positive numbers.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}

if (!is_number(argv[1]) || !is_number(argv[2]))
{
printf("Error\n");
return (1);
}

multiply(argv[1], argv[2]);
return (0);
}

/**
 * is_number - Checks if a string is a number.
 * @s: The string to check.
 *
 * Return: 1 if the string is a number, 0 otherwise.
 */
int is_number(char *s)
{
int i = 0;

while (s[i] != '\0')
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}

return (1);
}

/**
 * multiply - Multiplies two numbers represented as strings.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 */
void multiply(char *num1, char *num2)
{
int len1 = strlen(num1);
int len2 = strlen(num2);
int *result = malloc(sizeof(int) * (len1 + len2));
int i, j;

if (result == NULL)
{
printf("Error\n");
exit(98);
}

for (i = 0; i < len1 + len2; i++)
result[i] = 0;

for (i = len1 - 1; i >= 0; i--)
{
for (j = len2 - 1; j >= 0; j--)
{
int product = (num1[i] - '0') * (num2[j] - '0');
int sum = product + result[i + j + 1];
result[i + j + 1] = sum % 10;
result[i + j] += sum / 10;
}
}

print_result(result, len1 + len2);
free(result);
}

/**
 * print_result - Prints the result of multiplication.
 * @result: The array containing the result.
 * @size: The size of the result array.
 */
void print_result(int *result, int size)
{
int i = 0;

while (i < size && result[i] == 0)
i++;
if (i == size)

putchar('0');
else
{
while (i < size)
{
putchar(result[i] + '0');
i++;
}
}
putchar('\n');
}
