#include "main.h"

/**
 * swap_int - swap to value pointers
 * @a: swap first variable to second
 * @b: swap second variable to first 
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
