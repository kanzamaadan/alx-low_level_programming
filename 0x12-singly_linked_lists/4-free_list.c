#include "lists.h"

/**
 * free_list - Frees a list
 * @head: A pointer to the list head
 */
void free_list(list_t *head)
{
list_t *tmp;/** Temporary pointer to traverse the list */

while (head)
{
/** Store the next pointer before freeing the current node */
tmp = head->next;
free(head->str);/** Free the string stored in the current node */
free(head); /** Free the current node */
head = tmp; /** Move to the next node */
}
}
