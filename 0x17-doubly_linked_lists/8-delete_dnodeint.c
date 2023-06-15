#include "lists.h"
#include <stdlib.h>

/**
  * delete_dnodeint_at_index- insert at given index from a doubly linked list
  * @head: start of doubly linked list
  * @index: index of value inserted
  * Return: return 1 if succesful -1 if it fails
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int k;
	dlistint_t *delete, *hold = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		delete = hold;
		*head = hold->next;
		if (hold->next)
			hold->next->prev = NULL;
		free(delete);
		return (1);
	}

	for (k = 0; hold; k++, hold = hold->next)
		if (i == index - 1 && hold->next)
		{
			delete = hold->next;
			hold->next = delete->next;
			if (hold->next)
				hold->next->prev = hold;
			free(delete);
			return (1);
		}
	return (-1);
}
