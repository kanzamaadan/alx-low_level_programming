#include <stdlib.h>
#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc, exit(98) if it fails
 * @b: size of the memory block to be allocated
 *
 * Return: pointer to the address of the memory block
 */

void *malloc_checked(unsigned int b)
{
/* Attempt to allocate memory using malloc*/
int *result = (int *)malloc(sizeof(int) * b);

/*Check if the allocation was successful*/
if (result == NULL)
{
/* If malloc fails, exit the program with status 98*/
exit(98);
}

/* Note: It's not necessary to free the memory here */
/*since the goal is to return the allocated pointer.*/
/* Freeing it here would result in a memory leak.*/

/*Return the pointer to the allocated memory*/
return (result);
}
