#include "main.h"
/**
 * _strstr - func that finds the occurence of a substring
 * @needle: subtring whose occurence is to be found
 * @haystack: the main string
 * Return: pointer to the beginning of the located string
 * and null if @needle can not be found
*/
char *_strstr(char *haystack, char *needle)
{
	char *hhaystack;
	char *nneedle;

	while (*haystack != '\0')
	{
		hhaystack = haystack;
		nneedle = needle;

		while (*haystack != '\0' && *nneedle != '\0' && *haystack == *nneedle)
		{
			haystack++;
			nneedle++;
		}
		if (!*nneedle)
			return (hhaystack);
		haystack = hhaystack + 1;
	}
	return (0);
}
