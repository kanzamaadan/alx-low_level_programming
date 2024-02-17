#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to the head of the list
 * @str: string to be added
 *
 * Return: returns the address to the new element or NULL
 * if failed
 */
list_t *add_node(list_t **head, const char *str)
{
char *dupp; /** Pointer to store duplicate of the string */
int len; /** Variable to store the length of the string */
list_t *new; /** Pointer to the new node */

new = malloc(sizeof(list_t)); /** Allocate memory for the new node */
if (new == NULL)
return (NULL); /** Return NULL if memory allocation fails */

dupp = strdup(str);/** Duplicate the input string */
if (dupp == NULL)
{
free(new);/** Free the allocated memory for the new node */
return (NULL);/** Return NULL if strdup fails */
}

for (len = 0; str[len];)/** Calculate the length of the string */
len++;

/** Set the string of the new node to the duplicated string */
new->str = dupp;
new->len = len; /** Set the length of the new node */
/** Set the next pointer of the new node to the current head */
new->next = *head;

/** Update the head pointer to point to the new node */
*head = new;

/** Return the address of the new node */
return (new);
}
