#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string to be split.
 * Return: A pointer to an array of strings (words) or NULL if it fails.
 */
char **strtow(char *str)
{
int i, j, k, count = 0;
char **words;

/*Check for valid input*/
if (str == NULL || *str == '\0')
return (NULL);

/*Count the number of words in the string*/
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
count++;
}

/*If there are no words, return NULL*/
if (count == 0)
return (NULL);

/*Allocate memory for the array of pointers to strings*/
words = (char **)malloc(sizeof(char *) * (count + 1));
if (words == NULL)
return (NULL); /*Return NULL on memory allocation failure*/

/*Extract words from str and allocate memory for each word*/
for (i = 0, k = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ')
{
for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
; /*Move j to the end of the current word*/

/*Allocate memory for the current word*/
words[k] = (char *)malloc(sizeof(char) * (j - i + 1));
if (words[k] == NULL)
{
/*Free previously allocated memory on failure*/
for (i = 0; i < k; i++)
free(words[i]);
free(words);
return (NULL);
}

/*Copy characters of the current word to allocated memory*/
for (; i < j; i++, k++)
words[k][i - j] = str[i];
words[k][i - j] = '\0'; /*Null-terminate the word*/
}
}

words[k] = NULL; /*Null-terminate the array of pointers*/
return (words);    /*Return the array of pointers to strings (words)*/
}
