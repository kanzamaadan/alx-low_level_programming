#include "main.h"
#include <stdio.h>

/**
 * main - Entry point for the Fizz-Buzz program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
fizz_buzz();
return (0);
}

/**
 * fizz_buzz - Prints the Fizz-Buzz sequence from 1 to 100
 *
 * Return: void
 */

void fizz_buzz(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
printf("\n");
}
