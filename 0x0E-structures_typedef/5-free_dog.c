#include <stddef.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog
 * @d: Pointer to the dog to free
 */
void free_dog(dog_t *d)
{
/* Check if the pointer is not NULL */
if (d != NULL)
{
/* Free the allocated memory for the name and owner */
free(d->name);
free(d->owner);

/* Free the allocated memory for the dog structure */
free(d);
}
}
