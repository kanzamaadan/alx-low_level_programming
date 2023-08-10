#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int total_size = nmemb * size;
char *allocated_memory;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

allocated_memory = malloc(total_size);

if (allocated_memory == NULL)
return (NULL);

for (i = 0; i < total_size; i++)
allocated_memory[i] = 0;

return (allocated_memory);
}
