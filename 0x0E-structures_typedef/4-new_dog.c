#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - Copy a string
 * @dest: Destination buffer
 * @src: Source string
 * Return: Pointer to destination buffer
 */
char *_strcpy(char *dest, char *src)
{
int i;

if (src == NULL)
return (NULL);

if (dest == NULL)
dest = malloc(_strlen(src) + 1);

if (dest == NULL)
return (NULL);

for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
dest[i] = '\0';

return (dest);
}

/**
 * _strlen - Calculate the length of a string
 * @s: Input string
 * Return: Length of the string
 */
int _strlen(const char *s)
{
int len = 0;

while (s[len] != '\0')
len++;

return (len);
}

/**
 * new_dog - Create a new dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to the newly created dog structure
 *
 * Description: Create a new dog structure with provided values.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_d = malloc(sizeof(dog_t));
if (new_d == NULL)
return (NULL);

new_d->name = _strcpy(NULL, name);
if (new_d->name == NULL)
{
free(new_d);
return (NULL);
}

new_d->owner = _strcpy(NULL, owner);
if (new_d->owner == NULL)
{
free(new_d->name);
free(new_d);
return (NULL);
}

new_d->age = age;

return (new_d);
}

