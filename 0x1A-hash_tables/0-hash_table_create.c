#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht;
unsigned long int i;

ht = malloc(sizeof(hash_table_t));
if (ht == NULL)
{
return (NULL);
}
/* assigns size passed to func to size field of ht */
ht->size = size;
/* memory is allocated for the array of hash nodes */
ht->array = malloc(sizeof(hash_node_t *) * size);
if (ht->array == NULL)
{
return (NULL);  /* allocation failed */
}
for (i = 0; i < size; i++)
{
ht->array[i] = NULL;
}
return (ht);  /* returns a pointer to the new hash table */
}
