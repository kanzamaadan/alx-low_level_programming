#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at index of listint_t linked list
 * @head: Pointer to a pointer to the first node
 * @index: Index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *prev;
unsigned int i;

/* If head is NULL or empty list */
if (*head == NULL)
return (-1);

/* If index is 0, delete the first node */
if (index == 0)
{
current = *head;
*head = (*head)->next;
free(current);
return (1);
}

current = *head;
prev = NULL;

/* Traverse the list until the desired index */
for (i = 0; current != NULL && i < index; i++)
{
prev = current;
current = current->next;
}

/* If index is out of bounds */
if (current == NULL)
return (-1);

/* Update the next pointer of the previous node */
prev->next = current->next;

/* Free the node to be deleted */
free(current);
return (1);
}
