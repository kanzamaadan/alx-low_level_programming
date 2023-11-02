#include "hash_tables.h"

/**
 * hash_table_delete - this Deletes a hash table.
 * @ht:the pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
hash_table_t *head = ht;
hash_node_t *node, *tmp;
unsigned long int y;

for (y = 0; y < ht->size; y++)
{
if (ht->array[y] != NULL)
{
node = ht->array[y];
while (node != NULL)
{
tmp = node->next;
free(node->key);
free(node->value);
free(node);
node = tmp;
}
}
}
free(head->array);
free(head);
}
