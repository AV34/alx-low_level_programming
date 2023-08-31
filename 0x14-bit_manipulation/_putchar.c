#include "main.h"
#include <unistd.h>
/**
 * _putchar - char output
 * @c: char printed
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
