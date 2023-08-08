#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string in a newly allocated space in memory.
 * @str: The string to duplicate.
 *
 * Return: The pointer to the duplicated string, or NULL if it fails.
 */
char *_strdup(char *str)
{
char *dup_str;
int length = 0, i;

if (str == NULL)
return (NULL);

while (str[length])
length++;

dup_str = malloc((length + 1) * sizeof(char));

if (dup_str == NULL)
return (NULL);

for (i = 0; i <= length; i++)
dup_str[i] = str[i];

return (dup_str);
}
