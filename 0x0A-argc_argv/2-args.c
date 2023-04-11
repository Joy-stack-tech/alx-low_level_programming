#include <stdio.h>
/**
 * main - function that prints all arguments it recieves
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
*/
int main(int argc, char **argv)
{
	int j;

	for (j = 0; j < argc; j++)
		printf("%s\n", argv[j]);

	return (0);
}

