#ifndef HEADER_FILE
#define HEADER_FILE
#include <stddef.h>
#include <stdio.h>
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
