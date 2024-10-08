#include "lists.h"

/**
*dlistint_len - return number of elements
*@h: node
*Return: number of node
**/

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (i);

	while (h->prev != NULL)
		h = h->prev;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
