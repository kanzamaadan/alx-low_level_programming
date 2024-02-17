#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 * @head: Pointer to the head of the list
 * @str: String to be added to the list
 *
 * Return: NULL in case of failure or address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
char *dup;
int len;
list_t *new, *last;

/* Allocate memory for the new node */
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

/* Duplicate the string */
dup = strdup(str);
if (dup == NULL)
{
free(new);
return (NULL);
}

/* Calculate the length of the string */
for (len = 0; str[len]; len++)
;
/* Fill the new node */
new->str = dup;
new->len = len;
new->next = NULL;

/* If the list is empty, make the new node the head */
if (*head == NULL)
*head = new;
else
{
/* Otherwise, traverse to the end of the list */
last = *head;
while (last->next != NULL)
last = last->next;

/* Append the new node to the end */
last->next = new;
}

return (*head);
}
