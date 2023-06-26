#include <stdio.h>

void print_rev(char *s)
{
	int size = 0;
	char *s1 = s;

	while (*s1 != '\0')
	{
		size++;
		s1++;
	}


	for(int i = 0; i <= size; i++)
	{
		putchar(*s1);
		s1--;
	}
	putchar('\n');
}
