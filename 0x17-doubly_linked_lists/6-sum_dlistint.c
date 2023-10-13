#include "lists.h"

/**
 * sum_dlistint - returns the sumy of all the data (n)
 * of a doubly linked list
 *
 * @head: head of the list
 * Return: sumy of the data
 */
int sum_dlistint(dlistint_t *head)
{
int sumy;

sumy = 0;

if (head != NULL)
{
while (head->prev != NULL)
head = head->prev;

while (head != NULL)
{
sumy += head->n;
head = head->next;
}
}

return (sumy);
}
