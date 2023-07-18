#include "main.h"

/**
 * print_alphabet - Printing of alphabet in lowercsae
 *
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
