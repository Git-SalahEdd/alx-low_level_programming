#include "hash_tables.h"

/**
**hash_table_get - function that retrieves a value associated with a key.
*@ht: is the hash table you want to look into
*@key: is the key you are looking for
*Return: value associated with the element, or NULL if key couldn’t be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *head = NULL;
	int index = 0;

	index = key_index((const unsigned char *)key, ht->size);
	for (head = ht->array[index]; head; head = head->next)
	{
		if (ht->array[index] && !strcmp(ht->array[index]->key, key))
		{
			return (ht->array[index]->value);
		}
	}
	return (NULL);
}
