#include "hash_tables.h"

/**
 *
 *
 *
 *
 *
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int i;

	sht = malloc(sizeof(shash_table_t) * size);
	if (sht == NULL)
		return (NULL);
	sht->size = size;
	sht->head = NULL;
	sht->stail = NULL;
	sht->array malloc(sizeof(shash_table_t) *size);
	if (sht->array == NULL)
	{
		free(sht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		sht->array[i] = NULL;
	}
	return (sht);
}
/**
 *
 *
 *
 *
 *
*/
shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *shn;
	shn = malloc(sizeof(shash_node_t));
	if (shn == NULL)
		return (NULL);
	shn->key = strdup(key);
	if (shn->key == NULL)
	{
		free(shn);
		return (NULL);
	}
	shn->value = strdup(value);
	if (shn->value == NULL)
	{
		free(shn->key);
		free(shn);
		return (NULL);
	}
	shn->next = shn->next = shn->sprev = NULL;
	return (shn);
}

