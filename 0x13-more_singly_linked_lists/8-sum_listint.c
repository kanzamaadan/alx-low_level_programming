#include "lists.h"

/**
 * sum_listint - Returns sum of all the data (n) of a listint_t linked list.
 * @head: Pointer to the head of the listint_t list
 * Return: Sum of all the elements in the list, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
listint_t *tmp = head;
int sum = 0;

/* Traverse the list, adding the value of each node to the sum */
while (tmp != NULL)
{
sum += tmp->n;
tmp = tmp->next;
}

return (sum);
}
