#include "main.h"

/**
* _print_rev_recursion - prints string reversedly
* Description: prints string by recursion recursively
* @s: the string to be printed
* Retunr: void
*/

void _print_rev_recursion(char *s)
{

	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
