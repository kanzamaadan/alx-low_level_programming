#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;

while (head != NULL)
{
printf("[%p] %d\n", (void *)head, head->n);
count++;

if (head <= head->next)
{
printf("-> [%p] %d\n", (void *)head->next, head->next->n);
break;
}

head = head->next;
}

return (count);
}
