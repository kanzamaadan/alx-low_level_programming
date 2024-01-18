#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 *
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Size, in bytes, of the allocated space for ptr.
 * @new_size: New size, in bytes, of the new memory block.
 *
 * Return: A pointer to the newly allocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;

/*If new_size is zero, equivalent to free(ptr)*/
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

/*If ptr is NULL, equivalent to malloc(new_size)*/
if (ptr == NULL)
return (malloc(new_size));

/*If new_size is equal to old_size, do nothing and return ptr*/
if (new_size == old_size)
return (ptr);

/*Allocate memory for the new block*/
new_ptr = malloc(new_size);

/* Check if malloc fails*/
if (new_ptr == NULL)
return (NULL);

/*Copy the contents of the old block to the new block*/
for (unsigned int i = 0; i < old_size && i < new_size; i++)
*((char *)new_ptr + i) = *((char *)ptr + i);

/*Free the old block*/
free(ptr);

/*Return a pointer to the newly allocated memory block*/
return (new_ptr);
}
