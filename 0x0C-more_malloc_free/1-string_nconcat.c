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
    long unsigned int len = strlen(s1) + n;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    str = (char *)malloc(len + 1);
    if (str == NULL)
        return (NULL);

    int i;
    for (i = 0; i < len - 1; i++)
    {
        if (i < strlen(s1))
            str[i] = s1[i];
        else
            str[i] = *(s2++);
    }

    str[len - 1] = '\0';

    return (str);
}
