#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: the length of a string
 */

int _strlen(char *p)
{
	int i;

	i = 0;
	while (*p != '\0')
	{
		p++;
		i++;
	}
	return (i);
}
