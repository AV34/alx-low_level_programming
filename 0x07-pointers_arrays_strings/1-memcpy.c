#include "main.h"
/**
 * _memcpy - This is a function that copies mem area
 * @dest: mem where is stored
 * @src: mem where is copied
 * *@n: num of bytes
 *
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
