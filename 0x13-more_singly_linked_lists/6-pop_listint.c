#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 *               and returns the head node’s data (n).
 * @head: A pointer to a pointer to the first node of the list
 *
 * Return: The data (n) of the head node that was deleted,
 *         or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int data = 0;

if (head == NULL || *head == NULL)
return (0); /* Return 0 if the list is empty or head is NULL*/

temp = *head;   /* Store the current head node in a temporary pointer*/
data = temp->n; /* Get the data of the current head node*/

*head = (*head)->next; /* Move head to the next node*/

free(temp); /* Free the old head node*/

return (data); /* Return the data of the deleted node*/
}
