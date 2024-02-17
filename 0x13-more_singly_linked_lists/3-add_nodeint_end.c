#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: Pointer to a pointer to the first element in the list
 * @n: The integer value to be added to the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *last_node = *head;

/* Allocate memory for the new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

/* Initialize the new node */
new_node->n = n;
new_node->next = NULL;

/* If the list is empty, make the new node the head */
if (*head == NULL)
{
*head = new_node;
return (new_node);
}

/* Otherwise, traverse the list to find the last node */
while (last_node->next != NULL)
last_node = last_node->next;

/* Append the new node to the end of the list */
last_node->next = new_node;

/* Return the address of the new node */
return (new_node);
}
