#include "main.h"
/**
*binary_to_uint - converts number in base two to an uinsigned int.
*@b: pointer to a string containing the number in base 2
*
*Return: unsigned int with a decimal value of number in base 2 or 0 if error
*/
unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int num;

	count = 0;
	if (!b)
		return (0);
	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
	}
	for (count = 0; b[count] != '\0'; count++)
	{
		num <<= 1;
		if (b[count] == '1')
			num += 1;
	}
	return (num);
}
