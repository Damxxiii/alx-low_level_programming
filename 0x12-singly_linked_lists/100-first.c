#include "lists.h"
void first_call(void)__attribute__((constructor));
/**
 * first_call - function before the main function
 */
void first_call(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
