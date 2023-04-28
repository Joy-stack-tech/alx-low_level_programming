#include <stdio.h>

void __attribute__((constructor)) myjanny();
/**
 * myjanny - func that will be executed before main
 * so apply constructor attribute to it
 * Return: 0
*/
void myjanny(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
