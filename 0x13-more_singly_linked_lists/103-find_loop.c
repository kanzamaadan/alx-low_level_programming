#include "lists.h"

/**
 * find_listint_loop - Finds the start of a loop in a linked list
 * @head: Pointer to the head of the linked list
 * Return: Address of the node where the loop starts, NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head, *fast = head;

/* Check if the list is empty or has only one node */
if (!head || !(head->next))
return (NULL);

/* Floyd's cycle detection algorithm */
while (slow && fast && fast->next)
{
slow = slow->next;/* Move slow pointer by one step */
fast = fast->next->next;/* Move fast pointer by two steps */

/* If slow and fast pointers meet, there is a loop */
if (slow == fast)
{
/* Move slow pointer to the head and keep fast pointer where it is */
slow = head;

/* Move slow and fast pointers at the same speed until they meet */
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}

/* Return the address of the node where the loop starts */
return (fast);
}
}

/* If no loop is found, return NULL */
return (NULL);
}
