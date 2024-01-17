#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function concatenates two strings.
 * @s1: 1st string
 * @s2: 2nd string
 * Return: a pointer to a newly allocated space in memory
 *         containing the contents of s1, followed by s2, and null-terminated
 *         or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *concatenated;
unsigned int len1 = 0, len2 = 0, i, j;

/*Handle NULL strings by treating them as empty strings*/
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/*Calculate lengths of s1 and s2*/
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

/*Allocate memory for the concatenated string (+1 for '\0')*/
concatenated = malloc(sizeof(char) * (len1 + len2 + 1));

if (concatenated == NULL)
return (NULL);  /*Return NULL on failure*/

/*copy s1 to concatenated*/
for (i = 0; i < len1; i++)
concatenated[i] = s1[i];

/*Copy the contents of s2 to concatenated*/
for (j = 0; j < len2; j++)
concatenated[i + j] = s2[j];

concatenated[i + j] = '\0';  /*finally add Null-terminate*/

return (concatenated);
}
