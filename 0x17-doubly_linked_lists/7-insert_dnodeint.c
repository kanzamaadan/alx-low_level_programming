#include "lists.h"

/**
 * insert_dnodeint_at_index - this inserts a new node at
 * given position
 * @h: this head of the list
 * @idx: this index of the new node
 * @n:this value of the new node
 * Return: the address new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new;
dlistint_t *head;
unsigned int y;

new = NULL;
if (idx == 0)
new = add_dnodeint(h, n);
else
{
head = *h;
y = 1;
if (head != NULL)
while (head->prev != NULL)
head = head->prev;
while (head != NULL)
{
if (y == idx)
{
if (head->next == NULL)
new = add_dnodeint_end(h, n);
else
{
new = malloc(sizeof(dlistint_t));
if (new != NULL)
{
new->n = n;
new->next = head->next;
new->prev = head;
head->next->prev = new;
head->next = new;
}
}
break;
}
head = head->next;
y++;
}
}
return (new);
}
