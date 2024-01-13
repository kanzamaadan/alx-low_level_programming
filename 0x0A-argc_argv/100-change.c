#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins.
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int cents;
int i;
/* Define coin values*/
int num_coins = 0;
int coin_values[] = {25, 10, 5, 2, 1};
/* Check if the number of arguments is not exactly 2*/
if (argc != 2)
{
printf("Error\n");
return (1);
}

/* Convert the argument (amount in cents) to an integer*/
cents = atoi(argv[1]);

/* Check if the given amount is negative*/
if (cents < 0)
{
printf("0\n");
return (0);
}

/* Iterate through each coin value*/
for (i = 0; i < 5; i++)
{
/* Calculate the number of coins of the current value*/
while (cents >= coin_values[i])
{
cents -= coin_values[i];
num_coins++;
}
}

/* Print the minimum number of coins*/
printf("%d\n", num_coins);

return (0);
}
