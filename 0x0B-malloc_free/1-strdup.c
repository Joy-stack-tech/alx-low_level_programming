#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string
 * @str: source string
 *
 * Return: returns a pointer to the duplicated string
*/
char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, j;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	nstr = (char *)malloc((sizeof(char) * len) + 1);
	if (nstr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < len; j++)
	{
		nstr[j] = str[j];
	}
	nstr[len] = '\0';
	return (nstr);
}
