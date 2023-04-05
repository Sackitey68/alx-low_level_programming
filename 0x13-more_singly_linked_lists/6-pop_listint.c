#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: a double pointer to the beginning of the linked list
 *
 *Return: the nth node
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int k;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	k = start->k;
	free(start);
	return (k);
}

