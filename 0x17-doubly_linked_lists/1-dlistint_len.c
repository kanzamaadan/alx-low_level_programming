#include "lists.h"

/**
 * dlistint_len -this returns number of elements in
 * double linked list
 * @h: this head of the list
 * Return: the num of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
int county;

county = 0;

if (h == NULL)
return (county);

while (h->prev != NULL)
h = h->prev;

while (h != NULL)
{
county++;
h = h->next;
}

return (county);
}
