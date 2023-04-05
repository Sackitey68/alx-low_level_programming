#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the beginning of linked list
 * @index: index where to insert
 * @n: value for n
 * Return: the address of new node or NULL if fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new, *catch = *head;
	unsigned int i = 0;

	if (!index)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);

		(*new).n = n;
		(*new).next = *head;

		*head = new;

		return (*head);
	}

	while (catch)
	{
		if (i == (index - 1))
		{
			new = malloc(sizeof(listint_t));
			if (!new)
				return (NULL);
			(*new).n = n;
			(*new).next = (*catch).next;
			(*catch).next = new;
			return (new);
		}
		catch = (*catch).next;
		i++;
	}
	return (NULL);
}
