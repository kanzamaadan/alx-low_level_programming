#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: Constant pointer to listint_t
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;
const listint_t *current = h;

/* Traverse the list */
while (current != NULL)
{
/* Print the value of the current node */
printf("%d\n", current->n);

/* Move to the next node */
current = current->next;

/* Increment the node count */
nodes++;
}

/* Return the total number of nodes */
return (nodes);
}
