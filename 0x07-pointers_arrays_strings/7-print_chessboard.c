#include "main.h"
/**
 * print_chessboard - func that prints a chessboard
 * @a: pointer to thr input
 * Return: 0
*/
void print_chessboard(char (*a)[8])
{
	unsigned int j, k;

	for (j = 0; j < 8; j++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[j][k]);
		}
		_putchar('\n');
	}
}
