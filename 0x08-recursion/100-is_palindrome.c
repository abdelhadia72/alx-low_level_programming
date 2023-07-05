#include "main.h"
int get_size(char *s);
int check_palindrome(char *start, char *end);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int size;

	size = get_size(s);
	return (check_palindrome(s, s + size - 1));
}

/**
 * get_size - Calculates the size of a string.
 * @s: The input string.
 *
 * Return: The size of the string.
 */
int get_size(char *s)
{
	int size;

	size = 0;

	if (*s != 0)
		return (size += get_size(s + 1) + 1);
	return (0);
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @start: Pointer to the start of the string.
 * @end: Pointer to the end of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int check_palindrome(char *start, char *end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (*start != *end)
	{
		return (0);
	}
	return (check_palindrome(start + 1, end - 1));
}

