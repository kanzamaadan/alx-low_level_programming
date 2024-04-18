#include "hash_tables.h"

/**
 * hash_table_print - this print a hash table
 * @ht: ptr to the hash table
 *
 * Return: key/value pairs
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *node;
unsigned long int i;
unsigned char com_flg = 0;

if (ht == NULL)
{
return;
}
printf("{");
for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
if (com_flg == 1)
{
printf(", ");
}

node = ht->array[i];
while (node != NULL)
{
printf("'%s': '%s'", node->key, node->value);
node = node->next;
if (node != NULL)
{
printf(", ");
}
}
com_flg = 1;
}
}
printf("}\n");
}
