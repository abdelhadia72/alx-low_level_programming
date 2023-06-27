#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
* main - generates random valid passwords
*
* Return: Always 0. (Success)
*/

int main(void)
{
	int i, n;
	unsigned long int sum;
	char password[100];
	char alNum[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	n = i = sum = 0;
	srand(time(NULL));
	while (sum < (2772 - 122))
	{
	n = rand() % 62;
		password[i] = alNum[n];
		sum = sum + password[i];
		i++;
	}
	n = 2772 - sum;
	password[i] = n;
	password[++i] = '\0';
	printf("%s\n", password);
	return (0);
}
