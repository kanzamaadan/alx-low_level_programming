#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Create a new dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to the newly created dog structure
 *
 * Description:new dog structure with provided values.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_d = malloc(sizeof(dog_t));
if (new_d == NULL)
return (NULL);

new_d->name = name;
new_d->age = age;
new_d->owner = owner;

return (new_d);
}
