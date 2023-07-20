#include "main.h"
/**
 * _isupper - prg checks for uppsercse character
 * @c: Variable text
 * Reture: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
