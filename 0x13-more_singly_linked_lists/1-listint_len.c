#include "lists.h"

/**
 * listint_len - Calculates the number of elements in a listint_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
const listint_t *current = h;

/* Traverse the list */
while (current != NULL)
{
/* Increment the count for each node */
count++;

/* Move to the next node */
current = current->next;
}

/* Return the total number of elements */
return (count);
}
