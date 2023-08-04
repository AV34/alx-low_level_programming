#include <stdio.h>
#include "main.h"
/**
 * main - funct that prints all arguments it receives
 * @argc: nmb of arguments
 * @argv: [] of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
