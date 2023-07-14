#include <stdio.h>

/**
 * main - Start of the program
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	int r;
	
	for (r = 0; r < 10; r++) {
		putchar(r + '0');
		if (r < 9) {
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
