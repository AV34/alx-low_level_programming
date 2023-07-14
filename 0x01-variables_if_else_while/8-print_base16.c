#include <stdio.h>
/**
 * main - This is the begining of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char d;
	int e;

	e = 0;
	d = 'a';
	while( e < 10)
	{
		putchar(e + '0');
		e++;
	}
	while (d <= 'f')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
