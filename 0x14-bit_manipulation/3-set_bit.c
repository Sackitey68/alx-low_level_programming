#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets bit at index to 1
 * @n: input number
 * @index: index is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 60)
		return (-1);

	*n |= 1 << index;

	return (1);
}
