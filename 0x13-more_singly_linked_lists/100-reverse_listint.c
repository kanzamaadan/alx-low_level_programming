#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the first node
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *current = *head, *next_node;

/* If head is NULL or empty list */
if (*head == NULL)
return (NULL);

/* Reverse the list */
while (current != NULL)
{
/* Store next node */
next_node = current->next;

/* Reverse current node's pointer */
current->next = prev;

/* Move pointers one position ahead */
prev = current;
current = next_node;
}

/* Update head to point to the new first node */
*head = prev;

return (*head);
}
