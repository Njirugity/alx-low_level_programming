#include "lists.h"

/**
*sum_dlistint - calculate the sum of all the data
*@head: pointer to a linked list
*Return: sum of all the data (n)
**/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
