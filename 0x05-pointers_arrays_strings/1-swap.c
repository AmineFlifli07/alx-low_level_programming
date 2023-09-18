#include "main.h"

/**
 * swap_int - print numbers
 * @a : a parameter
 * @b : b parameter
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
