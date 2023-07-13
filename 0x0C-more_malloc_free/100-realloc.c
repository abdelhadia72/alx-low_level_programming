#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) {
  void *tmp;

  if (new_size == old_size) {
	return ptr;
  } else if (ptr == NULL) {
	tmp = malloc(new_size);
  } else if (new_size == 0) {
	free(ptr);
	return NULL;
  }
  else {
	tmp = malloc(new_size);
	if (tmp == NULL) {
	  return NULL;
	}
	memcpy(tmp, ptr, old_size);
	free(ptr);
  }

  return tmp;
}
