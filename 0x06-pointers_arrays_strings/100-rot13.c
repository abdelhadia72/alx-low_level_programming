#include "main.h"
/**
* rot13 - rot13 encryption algorithm
* Description:  function that encodes a string using rot13.
* @str: string to be encrypted
* Return: rot13 encoded
*/

char *rot13(char *str)
{
	int i, j;
	char firstRot13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char secondRot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
	{
		for (j = 0; firstRot13[j] != '\0'; j++)
		{
			if (str[i] == firstRot13[j])
			{
				str[i] = secondRot13[j];
				break;
			}
		}
	}
	i++;
	}
	return (str);
}
