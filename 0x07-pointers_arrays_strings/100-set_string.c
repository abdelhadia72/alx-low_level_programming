#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: Double pointer to a char
 * @to: Pointer to a char
 * Description: Sets the value of a double pointer to a char
 * to the value of a pointer to a char.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
