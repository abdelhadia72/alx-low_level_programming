#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings up to n bytes
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of bytes from s2 to concatenate
 * Return: Pointer to the concatenated string, or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *str;
    unsigned long int len;
    len = strlen(s1) + n + 1;
    unsigned long int i;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    str = (char *)malloc((len) * sizeof(char));
    if (str == NULL)
        return (NULL);

    for (i = 0; i < len - 1; i++)
    {
        if (i < strlen(s1))
            str[i] = s1[i];
        else
            str[i] = s2[i - strlen(s1)];
    }

    str[len] = '\0';

    return (str);
}
