#include "main.h"
/**
 * swap_int - value swap of int
 * @a: Int to swap
 * @b: Int to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
