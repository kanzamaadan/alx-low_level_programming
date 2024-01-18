#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - Concatenates 2 strings up to n chars of the 2nd string.
 *
 * @s1: First string to concatenate.
 * @s2: Second string to concatenate.
 * @n: Number of characters from s2 to concatenate.
 *
 * Return: A pointer to the allocated memory containing the concatenated stri
 *         If the function fails, it returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, k;
unsigned int len1 = 0, len2 = 0;
char *sconc;

/*Check if s1 is NULL, treat it as an empty string*/
if (s1 == NULL)
s1 = "";

/*Check if s2 is NULL, treat it as an empty string*/
if (s2 == NULL)
s2 = "";

/*Calculate the length of s1*/
while (s1[len1] != '\0')
len1++;

/*Calculate the length of s2*/
while (s2[len2] != '\0')
len2++;

/*Allocate memory for the concatenated string*/
sconc = (char *)malloc(sizeof(char) * (len1 + n + 1));

/*Check if malloc failed*/
if (sconc == NULL)
return (NULL);

/*Copy characters from s1 to the concatenated string*/
for (i = 0; i < len1; i++)
sconc[i] = s1[i];

/*Copy up to n characters from s2 to the concatenated string*/
for (j = 0, k = len1; j < n && j < len2; j++, k++)
sconc[k] = s2[j];

/*Null-terminate the concatenated string*/
sconc[k] = '\0';

/*Return a pointer to the concatenated string*/
return (sconc);
}
