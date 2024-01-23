#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog variable to initialize
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
/* Check if the pointer is not NULL */
if (d != NULL)
{
/* Initialize the struct members */
d->name = name;
d->age = age;
d->owner = owner;
}
}
