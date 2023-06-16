#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (No Error)
 */
int main(void)
{
int c = 122;

while (c >= 97)
{
putchar(c);
c--;
}

putchar('\n');
return (0);
}
