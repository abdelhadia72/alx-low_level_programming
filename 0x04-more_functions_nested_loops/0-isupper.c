#include "main.h"

/**
 * _isupper - function checks upperkeys
 * Description: This function checks
 * is the letter is uppsercase or not
 * @c:the argument that passed
 * by the user to check out
 * Return: r holde the value 0 or 1
 */

int _isupper(int c)
{

	int r;

	if (c <= 90 && c >= 65)
	{
		r = 1;
	} else
	{
		r = 0;
	}
	return (r);
}
