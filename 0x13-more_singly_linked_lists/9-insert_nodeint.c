#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to a pointer to the head of the listint_t list
 * @idx: Index of the list where the new node should be added
 * @n: Value to be inserted in the new node
 * Return: Address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newNode, *temp;
unsigned int i;

/* Allocate memory for the new node */
newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);

newNode->n = n;
newNode->next = NULL;

/* If index is 0, insert at the beginning */
if (idx == 0)
{
newNode->next = *head;
*head = newNode;
return (newNode);
}

/* Traverse the list to find the position to insert */
temp = *head;
for (i = 0; temp != NULL && i < idx - 1; i++)
temp = temp->next;

/* If position is found, insert the new node */
if (temp != NULL)
{
newNode->next = temp->next;
temp->next = newNode;
return (newNode);
}

/* If position is not found, free the allocated memory and return NULL */
free(newNode);
return (NULL);
}
