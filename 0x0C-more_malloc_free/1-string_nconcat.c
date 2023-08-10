#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes of s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate.
 * Return: Pointer to the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, i, j;
char *concatenated;

if (s1 != NULL)
{
while (s1[len1])
len1++;
}

concatenated = malloc(sizeof(char) * (len1 + n + 1));

if (concatenated == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concatenated[i] = s1[i];

for (j = 0; j < n && s2[j]; j++)
{
concatenated[i] = s2[j];
i++;
}
concatenated[i] = '\0';

return (concatenated);
}
