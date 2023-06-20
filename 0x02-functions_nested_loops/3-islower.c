#include "main.h"

/**
 * _lower - check for lowercase
 * Description: function that checks
 * for lowercase and return 1 in the true
 * case and 0 if it  found it no't lowercase
 * @c: is argument that holde the letter to checked
 * Return: 0 (Don't get An Error)
 */

int _islower(int c)
{
	if (c <= 122 && 97 <= c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (1);
}
