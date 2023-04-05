#include "lists.h"

/**
 * pop_listint - Delete the head node of a `listint_t` linked list
 * @head: double pointer to head node of linked list
 * Return: head nodes data `n`
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *catch;

	if (*head == NULL)
		return (0);

	catch = *head;
	num = catch->n;
	*head = catch->next;
	free(catch);

	return (num);
}

