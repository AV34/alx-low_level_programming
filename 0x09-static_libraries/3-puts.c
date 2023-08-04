#include "main.h"
/**
 * _puts - This is a prog for printn string to stdout
 * @str: Sting to be printed
 * _putchar printing of new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
