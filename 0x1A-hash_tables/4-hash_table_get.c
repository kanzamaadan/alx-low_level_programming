#include "hash_tables.h"

/**
 * hash_table_get - this retrieves the value associated with key in hash_table
 * @ht: ptr to the hash table
 * @key: the key to get the value for
 *
 * Return: in failure 0, otherwise 1
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *node;
unsigned long int index;

if (ht == NULL || key == NULL || *key == '\0')
{
return (NULL);
}

index = key_index((const unsigned char *)key, ht->size);
if (index >= ht->size)
{
return (NULL);
}

node = ht->array[index];
while (node && strcmp(node->key, key) != 0)
{
node = node->next;
}

return ((node == NULL) ? NULL : node->value);
}
