#include "lists.h"

/**
*add_dnodeint_end - adds a new node at the end of the list
*@head: pointer to head node
*@n: value to add to the node
*Return: address of new element
**/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	current = (*head);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = new;
		(*head)->prev = NULL;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
		new->prev = current;
	}
	return (new);
}
