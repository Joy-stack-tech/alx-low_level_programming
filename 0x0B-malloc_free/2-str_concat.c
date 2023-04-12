#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates 2 strings
 * @s1: input
 * @s2: input
 *
 * Return: 0 and null
*/
char *str_concat(char *s1, char *s2)
{
	int j, k, len, len1, len2;
	char *result;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		j = 0;
		while (s1[j++] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		j = 0;
		while (s2[j++] != '\0')
			len2++;
	}
	len = len1 + len2;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < len1; j++)
		result[j] = s1[j];
	for (k = 0; k < len2; k++, j++)
		result[j] = s2[k];
	result[len] = '\0';
	{
		return (result);
	}
}
