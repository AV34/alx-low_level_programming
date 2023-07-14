#include <stdio.h>
/**
 * main - Start of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int q;
	q = 0;
	while (q < 10) {
		putchar(q + '0');
		q++;
	}
	putchar('\n');
	return (0);
}
