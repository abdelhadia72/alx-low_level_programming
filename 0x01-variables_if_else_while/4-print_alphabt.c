#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (No Error)
 */
int main(void)
{
char c = 97;
while (c <= 122)
{
if (c != 101 && c != 113)
{
putchar(c);
}
c++;
}

putchar('\n');
return (0);
}
