#include <stdio.h>
void janny (void) _attribute_((constructor));
/**
 * janny - func that will be executed before main
 * Return: nothing
*/
void janny(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
