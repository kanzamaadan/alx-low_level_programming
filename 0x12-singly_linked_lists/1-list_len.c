#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list
 * @h: pointer to the list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
/** Initialize a variable to count the elements */
size_t elems = 0;

while (h)/** Iterate through the list until h is NULL (end of list) */
{
elems++;/** Increment the count of elements */
h = h->next;/** Move to the next node in the list */
}

return (elems);/** Return the total count of elements */
}
