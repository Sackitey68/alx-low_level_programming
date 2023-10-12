#include "search_algos.h"

/**
 * linear_search - searches for an element in an
 * array of integers using the Linear search algorithm
 *
 * @array: A pointer pointing to the first element of the array to search
 * @size: Number of elements in array
 * @value: Value to search for in the array
 *
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
