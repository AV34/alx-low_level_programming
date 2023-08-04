#include <stdio.h>
#include "main.h"
/**
 * main - funct that prints the name of the program
 * @argc: num of arguments
 * @argv: [] of arguments
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
