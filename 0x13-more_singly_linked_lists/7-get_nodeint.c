#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the first node of the list
 * @index: Index of the node to return (starting from 0)
 *
 * Return: Pointer to the nth node, or NULL if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int i = 0;

/* Traverse the list until the index is reached or the end of the list */
while (current != NULL)
{
if (i == index)
return (current); /* Return the node at the given index */

/* Move to the next node and increment the index */
current = current->next;
i++;
}

/* If the loop exits, the index is out of range, return NULL */
return (NULL);
}
