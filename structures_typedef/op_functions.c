#include "calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Return the sum of a and b
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Return the difference of a and b
 * @a: first integer
 * @b: second integer
 * Return: sub of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Return the product of a and b
 * @a: first integer
 * @b: second integer
 * Return: mul of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Return the result of the division of a and b
 * @a: first integer
 * @b: second integer
 * Return: result of the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Return the remainder of a and b
 * @a: first integer
 * @b: second integer
 * Return: remainder of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
