#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the args of the program.
 * @ac: number of arguments
 * @av: array of arguments
 * Return: a pointer to the concatenated string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
int i, j, k = 0;
int totalLength = 0;
char *concatenated;

/*Checks for valid input*/
if (ac == 0 || av == NULL)
return (NULL);

/*Calculates the total length of the concatenated string*/
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
totalLength++;
totalLength++; /*Account for '\n' after each argument*/
}

/*Allocate memory for the concatenated string*/
concatenated = (char *)malloc(sizeof(char) * (totalLength + 1));

/*Check for allocation failure*/
if (concatenated == NULL)
return (NULL);

/*Copy each arg with '\n' to the concatenated string*/
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
concatenated[k] = av[i][j];
k++;
}
concatenated[k] = '\n';
k++;
}
/*Null-terminate the concatenated string*/
concatenated[k] = '\0';

return (concatenated);
}
