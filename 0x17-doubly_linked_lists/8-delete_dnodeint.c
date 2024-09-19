#include "lists.h"

/**
*delete_dnodeint_at_index - deletes the node at index
*@head: pointer to linked list
*@index: index of node to be deleted
*Return: 1 if it succeeds, -1 if not
**/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	dlistint_t *temp;
	unsigned int i;

	current = *head;

	if (current != NULL)
		while (current->prev != NULL)
			current = current->prev;

	i = 0;

	while (current != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = current->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				temp->next = current->next;
				if (current->next != NULL)
					current->next->prev = temp;
			}
			free(current);
			return (1);
		}

		temp = current;
		current = current->next;
		i++;
	}
	return (-1);
}
