#include <stdio.h>
#include "dog.h"
#include <stddef.h>

/**
 * print_dog - Print a dog's information
 * @d: Pointer to the dog structure to print
 *
 * Description: This function prints the information of a dog structure.
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}
