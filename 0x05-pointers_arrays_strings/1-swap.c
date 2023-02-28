#include "main.h"
/**
 * swap_int - function that swaps two integers
 * @a: first int
 * @b: second int
 * Return 0 (success)
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
