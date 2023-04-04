#include "lists.h"

/**
 * print_listint - print the elements of linked list and return # of elements
 * @h: pointer to the first element
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	int k;

	for (k = 0; h; h = (*h).next, k++)
		printf("%d\n", (*h).n);

	return (k);
}
