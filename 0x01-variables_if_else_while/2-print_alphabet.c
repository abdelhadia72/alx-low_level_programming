#include <stdio.h>
/**
 * main - Entry point
 * Description: program printing from a to z lowercase 🔠
 * Return: 0 (No Error)
 */
int main(void)
{
    char c = 97;

    while (c <= 122)
    {
        putchar(c);
        c++;
    }

    putchar('\n');
    return (0);
}
