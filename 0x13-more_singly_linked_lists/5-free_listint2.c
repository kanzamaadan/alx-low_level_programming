#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 * @head: A pointer to a pointer to the first node of the list
 */
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL || *head == NULL)
return;

/* Traverse the list and free each node */
while (*head != NULL)
{
temp = *head;           /* Store the current node in a temporary pointer*/
*head = (*head)->next;  /* Move to the next node*/
free(temp);             /* Free the current node*/
}

*head = NULL;  /*Set the head pointer to NULL*/
}
