#include "main.h"

/**
 * _isalpha - function check alphabet
 * Description: This function chekcs the
 * letter is alphabet or not that passd by @c
 * @c: is the argument that's toke the letter
 * Return: 0 (No Error)
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || 97 <= c && c <= 122)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
