#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of
 * chars and initializes it with a specific char
 * @size: size of the array
 * @c: character to initialize the array with
 * Return: a pointer to the created array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *array;

if (size == 0)
{
return (NULL);/*Return NULL if size is 0*/
}

array = malloc(sizeof(char) * size);  /*Allocate memory for the array*/

if (array == NULL)
{
return (NULL);  /*NULL if it fails*/
}

while (size > 0)
{
size--;
array[size] = c;  /*Initialize elements of array with char*/
}

return (array);  /*Return a pointer to the created array*/
}
