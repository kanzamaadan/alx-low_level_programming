#include "lists.h"

/**
 * print_list - prints all the elements of a list
 *
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
/** Declare a pointer cursor and initialize it with the head of the list */
const list_t *cur = h;
/** Initialize a variable count to keep track of the number of nodes */
size_t count = 0;

while (cur != NULL)
{
/** Iterate through the list until the end is reached */
if (cur->str != NULL)/** Check if the string in the current node is not NULL */
printf("[%d] %s\n", cur->len, cur->str);
/** Print the length and string of the current node */
else
printf("[0] (nil)\n");/** If the string is NULL, print nil */
count += 1;/** Increment the count of nodes */
cur = cur->next;/** Move to the next node */
}

return (count);/** Return the total number of nodes */
}
