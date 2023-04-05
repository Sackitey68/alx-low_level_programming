#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deleted the head node of a linked list and returns the (n)
 * @head: double pointer to the head node of the linked list
 * Return: deleted value - n
 */

int pop_listint(listint_t **head)
{
	listint_t *catch;
	int k;

	if (head && *head)
	{
		catch = *head;
		k = (**head).k;
		*head = (**head).next;
		free(catch);
		return (k);
	}
	return (0);
}
