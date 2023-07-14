#include <stdio.h>
/**
 * main - Entry of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char w;
	char x;

	w = 'a';
	x = 'A';
	while (w <= 'z') {
		putchar(w);
		w++;
	}
	while (x <= 'Z') {
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
