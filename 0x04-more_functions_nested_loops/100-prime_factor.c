#include <stdio.h>
/**
 * print_number - Prints out the larget prime factor of 612852475143
 * Return:return 0 with success.
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
