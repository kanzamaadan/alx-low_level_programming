#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the first element of the list
 *
 * Description: This function frees each node of a linked list.
 */
void free_listint(listint_t *head)
{
listint_t *temp;

/* Traverse the list and free each node */
while (head != NULL)
{
temp = head;/* Store the current node */
head = head->next;/* Move to the next node */
free(temp);/* Free the current node */
}
}
