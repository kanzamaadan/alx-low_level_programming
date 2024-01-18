#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * and terminates the program if allocation fails.
 *
 * @b: Number of elements to allocate memory for.
 * Return : A pointer to the allocated memory.
*/
void *malloc_checked(unsigned int b)
{
void *result;
/*Attempt to allocate memory using malloc*/
result = malloc(b);
/*Check if the allocation was successful*/
if (result == NULL)
{
/*If malloc fails, exit the program with status 98*/
exit(98);

}
/*Return the pointer to the allocated memory*/
return (result);
}
