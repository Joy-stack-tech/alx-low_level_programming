#include <stdio.h>

void _attribute_((constructor)) janny(void);
/**
 * janny - func that will be executed before main
 * Return: nothing
*/
void janny(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
