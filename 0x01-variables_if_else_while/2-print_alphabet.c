#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	char e;

	e = 'a';
	while (e <= 'z')
       	{
		putchar(e);
		e++;
	}
	putchar('\n');
	return (0);
}
