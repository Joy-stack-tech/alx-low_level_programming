#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies 2 numbers
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: 0
*/
int main(int argc, char **argv)
{
	int p, q;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	p = atoi(argv[1]);
	q = atoi(argv[2]);
	printf("%d\n", p * q);

	return (0);
}
