#include "main.h"
/**
 * flip_bits - calls count_bits function
 * @n: first input number
 * @m: second input number
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int hold = n ^ m, count = 0;

	while (hold)
	{
		count += hold & 1;
		hold >>= 1;
	}
	return (count);
}
