#include "main.h"
#include <stdlib.h>
/**
 * create_array - funt that create [] of size and assign char c
 * @size: size of []
 * @c: char to assign
 * Description: creat [] of size size and assign char c
 * Return: pointer to [], NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
