#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: The pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
char *concat_str;
int total_length = 0, i, j, k = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j])
{
total_length++;
j++;
}
total_length++;
}

concat_str = malloc((total_length + 1) * sizeof(char));

if (concat_str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j])
{
concat_str[k++] = av[i][j];
j++;
}
concat_str[k++] = '\n';
}
concat_str[k] = '\0';

return (concat_str);
}
