#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely
 * @h: Pointer to a pointer to the first node of the linked list
 * Return: The number of nodes in the list that were freed
 */
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
int diff;
listint_t *current, *next;

if (h == NULL || *h == NULL)
return (0);

current = *h;
while (current != NULL)
{
diff = current - current->next;
if (diff > 0)
{
next = current->next;
free(current);
current = next;
count++;
}
else
{
free(current);
*h = NULL;
count++;
break;
}
}

*h = NULL;
return (count);
}
