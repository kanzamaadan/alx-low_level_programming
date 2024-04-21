#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the hash table
 *
 * Return: a ptr to the newly created hash table, but
 * if there is any error, NULL is returned
 */
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *ht;
unsigned long int i;

ht = malloc(sizeof(shash_table_t));
if (ht == NULL)
{
return (NULL);
}
ht->size = size;
ht->array = malloc(sizeof(shash_node_t *) * size);
if (ht->array == NULL)
{
free(ht);
return (NULL);
}
for (i = 0; i < size; i++)
{
ht->array[i] = NULL;
}
ht->shead = NULL;
ht->stail = NULL;

return (ht);
}

/**
 * shash_table_set - set a hash table
 * @ht: the hash table
 * @key: the hash key to add
 * @value: the value associated with the hash key
 *
 * Return: 0 on failure, 1 on success
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
shash_node_t *new, *temp;
char *val_cpy;
unsigned long int indx;

if (ht == NULL || key == NULL || value == NULL || *key == '\0')
{
return (0);
}
val_cpy = strdup(value);
if (val_cpy == NULL)
{
return (0);
}
indx = key_index((const unsigned char *)key, ht->size);
temp = ht->shead;
while (temp)
{
if (strcmp(temp->key, key) == 0)
{
free(temp->value);
temp->value = val_cpy;
return (1);
}
temp = temp->snext;
}
new = malloc(sizeof(shash_node_t));
if (new == NULL)
{
free(val_cpy);
return (0);
}
new->key = strdup(key);
if (new->key == NULL)
{
free(val_cpy);
free(new);
return (0);
}
new->value = val_cpy;
new->next = ht->array[indx];
ht->array[indx] = new;

if (ht->shead == NULL)
{
new->sprev = NULL;
new->snext = NULL;
ht->shead = new;
ht->stail = new;
}
else if (strcmp(ht->shead->key, key) > 0)
{
new->sprev = NULL;
new->snext = ht->shead;
ht->shead->sprev = new;
ht->shead = new;
}
else
{
temp = ht->shead;
while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
{
temp = temp->snext;
}
new->sprev = temp;
new->snext = temp->snext;
if (temp->snext == NULL)
{
ht->stail = new;
}
else
{
temp->snext->sprev = new;
}
temp->snext = new;
}
return (1);
}

/**
 * shash_table_get - get a hash table
 * @ht: the hash table
 * @key: the hash key to add
 *
 * Return: value associated with the key if found,
 * otherwise return NULL.
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
shash_node_t *node;
unsigned long int indx;

if (ht == NULL || key == NULL || *key == '\0')
{
return (NULL);
}
indx = key_index((const unsigned char *)key, ht->size);
if (indx >= ht->size)
{
return (NULL);
}
node = ht->shead;
while (node != NULL && strcmp(node->key, key) != 0)
{
node = node->snext;
}
return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - print a sorted hash table in order
 * @ht: hash table
*/
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *node;

if (ht == NULL)
{
return;
}
node = ht->shead;
printf("{");
while (node != NULL)
{
printf("'%s' : '%s'", node->key, node->value);
node = node->snext;
if (node != NULL)
{
printf(", ");
}
}
printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order
 * @ht: the ptr to hash tale
*/
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *node;
if (ht == NULL)
{
return;
}
node = ht->stail;
printf("{");
while (node != NULL)
{
printf("'%s' : '%s'", node->key, node->value);
node = node->sprev;
if (node != NULL)
{
printf(", ");
}
}
printf("}\n");
}

/**
 * shash_table_delete - delete a shash_table
 * @ht: a ptr to a shash_table
*/
void shash_table_delete(shash_table_t *ht)
{
shash_table_t *head = ht;
shash_node_t *node, *temp;
if (ht == NULL)
{
return;
}
node = ht->shead;
while (node)
{
temp = node->snext;
free(node->key);
free(node->value);
free(node);
node = temp;
}
free(head->array);
free(head);
}
