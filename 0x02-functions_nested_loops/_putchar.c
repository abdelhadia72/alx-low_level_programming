/**
 * _putchar - my own _putchar function
 * Description: This function printed single
 * character that passed by @c
 * @c: The character that you need to pass
 * Return: Always 0 means no error
 */

#include <unistd.h>

char _putchar(char c)
{
        write(1, &c, 1);
        return (0);
}
