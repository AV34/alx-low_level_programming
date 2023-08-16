#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - func Returns the sum of two nums.
 * @a: The first num.
 * @b: The second num.
 *
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - func Returns the difference of two nums.
 * @a: The first num.
 * @b: The second num.
 * Return: The difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - func Returns the product of 2 nums.
 * @a: The first num.
 * @b: The second num.
 * Return: The product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - fun Returns the division of two nums.
 * @a: The first num.
 * @b: The second num.
 * Return: The quotient of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - func Returns the remainder of the division of two numbers.
 * @a: The first num.
 * @b: The second num.
 * Return: The remainder of the div of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
