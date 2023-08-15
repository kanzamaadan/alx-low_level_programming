#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free memory used by a dog structure
 * @d: Pointer to the dog structure to free
 *
 * Description: This function frees the memory used by a dog structure.
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
