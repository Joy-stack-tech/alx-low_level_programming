#include "3-calc.h"
/**
 * op_add - function that adds 2 numbers @a and @b
 * @a: first number to add
 * @b: second number to add
 *
 * Return: value for addition
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtracts 2 numbers
 * @a: first number of subtraction
 * @b: second number
 *
 * Return: value of subtraction
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op-mul - function that finds product of 2 numbers
 * @a: 1st number for multiplication
 * @b: second number for mult
 *
 * Return: value for mult
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides 2 numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: value for the division
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function that returns remainder of division
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: remainder of the division
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

