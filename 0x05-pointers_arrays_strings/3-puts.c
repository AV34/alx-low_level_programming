#include "main.h"
/**
 * _puts - printing of string, newline to stdou
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
