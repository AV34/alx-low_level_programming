#include "main.h"
/**
 * _isalpha - tests whether a character is from the English alpha
 * @c: character to be checked.
 * Return: 1 if the character is english
 * 0 if the character is not an English
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
