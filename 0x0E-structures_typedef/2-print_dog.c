#include <stdio.h>
#include "dog.h"
#include <stddef.h>

/**
 * print_dog - Prints the values of a struct dog
 * @d: Pointer to the struct dog variable to print
 */
void print_dog(struct dog *d)
{
/* Check if the pointer is not NULL */
if (d != NULL)
{
/* Print the struct members, or (nil) if NULL */
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}
