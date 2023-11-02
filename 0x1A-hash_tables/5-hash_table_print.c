#include "hash_tables.h"

/**
 * hash_table_print - this Prints a hash table.
 * @ht: A pointer to the hash table to print.
 * Description: here Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
hash_table_t *head = ht;
hash_node_t *node;
unsigned long int y;
unsigned char comma_flag = 0;

if (ht == NULL)
return;
printf("{");
for (y = 0; y < ht->size; y++)
{
if (ht->array[y] != NULL)
{
if (comma_flag == 1)
printf(", ");
node = ht->array[y];
while (node != NULL)
{
printf("'%s': '%s'", node->key, node->value);
node = node->next;
if (node != NULL)
printf(", ");
}
comma_flag = 1;
}
}
printf("}\n");
}
