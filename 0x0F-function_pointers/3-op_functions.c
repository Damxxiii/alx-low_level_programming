#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two nos
 * @a: input1
 * @b: input2
 *
 * Return: sum of two nos
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub two nos
 * @a: input1
 * @b: input2
 *
 * Return: sub of two nos
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul two nos
 * @a: input1
 * @b: input2
 *
 * Return: mul of two nos
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: input1
 * @b: input2
 *
 * Return: mod of two nos
 */

int op_mod(int a, int b)
{
	return (a % b);
}

/**
 * op_div - div of two nos
 * @a: input1
 * @b: input2
 *
 * Return: div of two nos
 */

int op_div(int a, int b)
{
	return (a / b);
}
