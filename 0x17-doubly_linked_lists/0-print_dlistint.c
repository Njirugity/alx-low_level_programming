#include "lists.h"

/**
*print_dlistint - prints all the elements
*@h: node to print
*Return: number of node
**/

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%u\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
