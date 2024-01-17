#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 * Return: a pointer to the duplicated string,
 * or NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
char *duplicate;
unsigned int length = 0;
unsigned int i;

if (str == NULL)
{
return (NULL);  /*Return NULL if str is NULL*/
}

/*Calculate the length of the input string*/
while (str[length] != '\0')
{
length++;
}

duplicate = malloc(sizeof(char) * (length + 1));
/*Allocate memory for the duplicated string*/

if (duplicate == NULL)
{
return (NULL);  /*Return NULL if malloc fails*/
}

/*Copy the chars from the input string to the duplicated string*/
for (i = 0; i <= length; i++)
{
duplicate[i] = str[i];
}

return (duplicate);  /*Return pointer to the duplicated string*/
}
