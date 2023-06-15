#include "main.h"

/**
<<<<<<< HEAD
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
=======
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
>>>>>>> d07de7d5b88acad442b9468dec32df6c3374dd63
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
<<<<<<< HEAD
	unsigned int k = 0;
=======
	unsigned int k;
>>>>>>> d07de7d5b88acad442b9468dec32df6c3374dd63

	k = 0;
	if (!b)
		return (0);
<<<<<<< HEAD

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		k = 2 * k + (b[i] - '0');
	}

=======
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		k <<= 1;
		if (b[i] == '1')
			k += 1;
	}
>>>>>>> d07de7d5b88acad442b9468dec32df6c3374dd63
	return (k);
}

