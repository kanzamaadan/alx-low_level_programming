#include "hash_tables.h"

/**
 * hash_table_set - this gives you the index of a key
 * @ht: ptr to the hash table
 * @key: the key to add, can be empty str
 * @value: the value related to the key
 *
 * Return: in failure 0, otherwise 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new;
	char *value_copy;
	unsigned long int index, i;

if (ht == NULL || key == NULL || value == NULL || *key == '\0')
{
return (0);
}
value_copy = strdup(value);
if (value_copy == NULL)
{
return (0);
}
index = key_index((const unsigned char *)key, ht->size);
for (i = index; ht->array[i]; i++)
{
if (strcmp(ht->array[i]->key, key) == 0)
{
free(ht->array[i]->value);
ht->array[i]->value = value_copy;
return (1);
}
}
new = malloc(sizeof(hash_node_t));
if (new == NULL)
{
free(value_copy);
return (0);
}
new->key = strdup(key);
if (new->key == NULL)
{
free(new);
return (0);
}
new->value = value_copy;
new->next = ht->array[index];
ht->array[index] = new;
return (1);
}
