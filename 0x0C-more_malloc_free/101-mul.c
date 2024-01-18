#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to check.
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(char c)
{
return (c >= '0' && c <= '9');
}

/**
 * _strlen - Computes the length of a string.
 * @str: The input string.
 * Return: The length of the string.
 */
int _strlen(char *str)
{
int len = 0;
while (str[len] != '\0')
len++;
return (len);
}

/**
 * print_error - Prints an error message and exits with status 98.
 */
void print_error(void)
{
printf("Error\n");
exit(98);
}

/**
 * validate_input - Validates the input arguments.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 1 if validation succeeds, 0 otherwise.
 */
int validate_input(int argc, char *argv[])
{
int i, j;

if (argc != 3)
return (0);

for (i = 1; i <= 2; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!_isdigit(argv[i][j]))
return (0);
}
}
return (1);
}

/**
 * multiply - Multiplies two positive numbers represented as strings.
 * @num1: The first number.
 * @num2: The second number.
 * Return: The result of multiplication as a string.
 */
char *multiply(char *num1, char *num2)
{
int len1 = _strlen(num1);
int len2 = _strlen(num2);
int *result, i, j, carry, prod;

result = calloc(len1 + len2, sizeof(int));
if (result == NULL)
print_error();

for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
prod = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
result[i + j + 1] = prod % 10;
carry = prod / 10;
}
result[i + j + 1] = carry;
}

for (i = 0; i < len1 + len2; i++)
result[i] += '0';

return (result);
}

/**
 * main - Entry point.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
char *result;

if (!validate_input(argc, argv))
print_error();

result = multiply(argv[1], argv[2]);

if (result[0] == '0' && result[1] == '\0')
result = result + 1;

printf("%s\n", result);

free(result);

return (0);
}
