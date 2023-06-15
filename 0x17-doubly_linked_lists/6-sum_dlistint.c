#include "lists.h"

/**
 * sum_dlistint - sums all of the data of a dlistint_t linked list
 * @head: pointer pointing to beginning of the linked list
 *
 * Return: total sum of all data, or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total = total + head->n;
		head = head->next;
	}
	return (total);
}
