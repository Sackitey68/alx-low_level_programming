#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that free listint_t list
 * @head: double pointer points to the beginning of the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *catch;

	while (head && *head)
	{
		catch = *head;
		*head = (**head).next;
		free(catch);
	}
}
