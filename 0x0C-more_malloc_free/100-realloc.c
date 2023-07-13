#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *tmp;

	if (new_size == 0) {
		free(ptr);
		return NULL;
	}

	if (ptr == NULL) {
		ptr = malloc(new_size);
	} else {
		tmp = malloc(new_size);
		if (tmp == NULL) {
			return NULL;
		}
		memcpy(tmp, ptr, old_size + 1);
		free(ptr);
	}

	return tmp;
}
