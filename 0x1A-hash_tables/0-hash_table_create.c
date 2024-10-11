#include "hash_tables.h"

/**
*hash_table_create - Create a hash table
*@size: Size of the array
*Return: Pointer to a newly created hash table
**/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	hash_node_t **array;
	unsigned long int i;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new->size = size;
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = NULL;

	new->array = array;

	return (new);
}
