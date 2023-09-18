#include "main.h"

/**
 * _strncat - funtion concatenates two strings
 * Description: This funtion
 * concatenates two strings
 * @dest: string that we will add to
 * @src: the string that we will adding
 * @n: bytes from src
 * Return: dest concatenated string
 *
 */

char *_strncat(char *dest, char *src, int n)
{
        int size;
        int i;

        size = 0;

        while (dest[size] != '\0')
        {
                size++;
        }

        for (i = 0; i < n && *src != '\0'; i++)
        {
                *(dest + (size + i)) = *(src + i);
        }

        *(dest + (size + i)) = '\0';

        return (dest);
}
