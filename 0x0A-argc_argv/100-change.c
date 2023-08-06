#include <stdio.h>
#include <stdlib.h>

/**
 * compute_coins - Calculate the number of coins needed for change
 * @cents: The amount of cents to give change for
 * @denomination: The value of the coin denomination
 *
 * Return: The number of coins needed for change
 */
int compute_coins(int *cents, int denomination)
{
int coins = 0;
while (*cents >= denomination)
{
*cents -= denomination;
coins++;
}
return (coins);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments (including the program name)
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 (Success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
int cents, coins = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}

coins += compute_coins(&cents, 25);
coins += compute_coins(&cents, 10);
coins += compute_coins(&cents, 5);
coins += compute_coins(&cents, 2);
coins += compute_coins(&cents, 1);

printf("%d\n", coins);
return (0);
}
