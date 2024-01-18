#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 *
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to the allocated memory.
 * If nmemb or size is 0, or if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *ptr;

/*Check for zero size or number of elements*/
if (nmemb == 0 || size == 0)
return (NULL);

/*Allocate memory for the array*/
ptr = malloc(nmemb * size);

/*Check if malloc fails*/
if (ptr == NULL)
return (NULL);

/*Initialize the allocated memory to zero*/
for (i = 0; i < nmemb * size; i++)
ptr[i] = 0;

/*Return a pointer to the allocated memory*/
return ((void *)ptr);
}
