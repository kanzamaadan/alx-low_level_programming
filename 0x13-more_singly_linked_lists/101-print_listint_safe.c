#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: Pointer to the first node of the linked list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow, *fast;
size_t count = 0;

slow = fast = head;

while (slow != NULL && fast != NULL && fast->next != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
slow = slow->next;
fast = fast->next->next;

/* If loop exists */
if (slow == fast)
{
printf("-> [%p] %d\n", (void *)slow, slow->n);
exit(98);
}
}

/* Print the remaining nodes */
while (slow != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
slow = slow->next;
}

return (count);
}
