#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function taht check code for
 * the program that performs simple operations
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int a, b;
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	oprt = get_op_func(argv[2]);

	if (oprt == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", oprt(a, b));
	return (0);
}

