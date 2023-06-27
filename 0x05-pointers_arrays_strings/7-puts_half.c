#include <stdio.h>

/**
 * puts_half - prints the half
 * @str: pointer to the string
 * Description: This funtionprints
 * the second half of a string
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		for (i = (len + 1) / 2; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}




int main(void)
{
    char *str;
    char *str2;

    str2 = "wowlolfine";
    str = "0123456789";
    puts_half(str);
    puts_half(str2);
    return (0);
}
