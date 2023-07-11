#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - convert argument list to a string
 * @ac: number of arguments
 * @av: argument array
 *
 * Return: string of arguments with newline characters
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, size, tracker;
	char *str;

	for (i = 0; i < ac; i++)
	{
			size += strlen(av[i]) + 1;
		}

	str = (char *)malloc((size));

	if (!str)
	{
			return (NULL);
		}

	for (j = 0; j < ac; j++)
	{
			for (k = 0; av[j][k]; k++, tracker++)
			{
						str[tracker] = av[j][k];
					}
			str[tracker++] = '\n';
		}
	str[tracker] = '\0';

	return (str);
}
