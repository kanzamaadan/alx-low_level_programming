#include "lists.h"

/**
 * get_dnodeint_at_index - this returns  nth node of dlistint_t linked list.
 * @head: this pointer to head of the list
 * @index: the index node to search for, starting from 0
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int size;
dlistint_t *tmpy;

size = 0;
if (head == NULL)
return (NULL);

tmpy = head;
while (tmpy)
{
if (index == size)
return (tmpy);
size++;
tmpy = tmpy->next;
}
return (NULL);
}
