#include "lists.h"

/**
*insert_dnodeint_at_index - inserts a new node
*@h: pointer to a linked list
*@idx: index of the new node
*@n: value of the new node
*Return: the address of the new node
**/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *current;
	unsigned int i;

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		current = *h;
		i = 1;
		if (current != NULL)
			while (current->prev != NULL)
				current = current->prev;
		while (current != NULL)
		{
			if (i == idx)
			{
				if (current->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = current->next;
						new->prev = current;
						current->next->prev = new;
						current->next = new;
					}
				}
				break;
			}
			current = current->next;
			i++;
		}
	}

	return (new);
}
