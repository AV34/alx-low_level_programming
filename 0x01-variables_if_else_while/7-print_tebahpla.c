#include <stdio.h>
/**
 * main - Start of the program
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char q;

	q = 'z';
	while (q >= 'a')
	{
		putchar(q);
		q--;
	}
	putchar('\n');
	return (0);
}
