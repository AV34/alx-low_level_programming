#include <stdio.h>
#include "main.h"
/**
 * main - func that print the number of arguments passed to the program
 * @argc: num of arguments
 * @argv: [] of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
