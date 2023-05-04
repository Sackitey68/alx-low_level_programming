#include "main.h"

/**
 * binary_to_uint - convert binary to int
 * @b: binary string
 *
 * Return: Number
 */
unsigned int binary_to_uint(const char *b)
{
	int len, i;
	uint sum = 0;

	if (!b)
		return (sum);

	len = slen(b);
	if (!valid(b))
		return (0);

	for (i = 0, len--; b[i]; i++, len--)
		if (b[i] == '1')
			sum += 1 * (1 << len);

	return (sum);
}
