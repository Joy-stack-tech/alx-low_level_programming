#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat -function that concatenates 2 strings
 * @s1: the first char
 * @s2: the second char
 * @n: umsigned int
 *
 * Return: return null if the function fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j, k, l;
	char *s;

	if (s1 == NULL)
		j = 0;
	else
	{
		for (j = 0; s1[j]; j++)
			;
	}
	if (s2 == NULL)
		k = 0;
	else
	{
		for (k = 0; s2[k]; k++)
			;
	}
	if (k > n)
		k = n;
	s = malloc(sizeof(char) * (j + k + 1));
	if (s == NULL)
		return (NULL);
	for (l = 0; l < j; l++)
		s[l] = s1[l];
	for (l = 0; l < k; l++)
		s[l + j] = s2[l];
	s[j + k] = '\0';
	return (s);
}
