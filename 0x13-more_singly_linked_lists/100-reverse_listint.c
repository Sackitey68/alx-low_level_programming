#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: double pointer to beginning of linked list
 * Return: a pointer to the first node of the reveresed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL, *next;

	while (*head)
	{
		next = (**head).next;
		(**head).next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
