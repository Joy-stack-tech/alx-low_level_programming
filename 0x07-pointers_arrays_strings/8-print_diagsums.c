#include "main.h"
/**
 * print_diagsums - func that prints the sum of
 * a square matrix
 * @size:  the matrix column width
 * @a: pointer to start of matrix
 * Return: empty
*/
void print_diagsums(int *a, int size)
{
	int j, num1, num2 = 0;

	num1 = 0;
	for (j = 0; j < (size * size); j++)
	{
		if (j % (size + 1) == 0)
			num1 += *(a + j);
		if (j % (size - 1) == 0 && j != 0 && j < size * size - 1)
			num2 += *(a + j);
	}
	printf("%d, %d\n", num1, num2);
}

