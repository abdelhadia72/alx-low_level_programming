#include "lists.h"

/**
 * before_main - Function that prints a
 * message before the main function is executed.
 * Return: None.
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
