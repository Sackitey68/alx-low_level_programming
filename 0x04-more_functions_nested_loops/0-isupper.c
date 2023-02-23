#include "main.h"

/**
 * _isupper - Checks for an uppercase letter
 * @c: The int value of character to evaluate
 *
 * Return: 1 if uppercase, other case 0
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
