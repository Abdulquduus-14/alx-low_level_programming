#include "3-calc.h"

/**
 * opt_add - adds two integral numbers
 * @a: first integers to add
 * @b: second integer to be added
 * Return: returns the sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * opt_sub - subtracts two integral numbers
 * @a: first integers to subtract
 * @b: second integer to be subtracted
 * Return: returns the difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * opt_mul - multiplies two integral numbers
 * @a: first integers to multiply
 * @b: second integer to be multiplied
 * Return: returns the product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * opt_div - adds two integral numbers
 * @a: first integer to divide
 * @b: second integer to be divided
 * Return: returns the result of a divided by b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * opt_mod - adds two integral numbers
 * @a: first integer
 * @b: second integer
 * Return: returns the remainder of a divided by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
