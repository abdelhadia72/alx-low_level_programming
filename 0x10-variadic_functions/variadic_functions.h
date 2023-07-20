#ifndef VARIADIC_FUN_H
#define VARIADIC_FUN_H
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


typedef struct print_me
{
	char *flag;
	void (*f)(va_list);
} print_me;

#endif
