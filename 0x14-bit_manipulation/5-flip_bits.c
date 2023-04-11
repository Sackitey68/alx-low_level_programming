#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first input number
 * @m: second input number
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int temp;

	for (temp = 0; n || m; n >>= 1, m >>= 1)
	{
	if ((n & 1) != (m & 1))
	temp++;
	}
	return (temp);
}
