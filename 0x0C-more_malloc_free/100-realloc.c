#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *tmp;
	if(old_size >= new_size)
		return malloc(new_size);

	if(new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if(!ptr)
	{
		ptr = malloc(new_size);
	}

	if(new_size == old_size)
		return ptr;

	tmp = (void *)malloc(new_size);
	if(!tmp)
		return (NULL);
	memcpy(tmp,ptr,old_size);
	free(ptr);
	ptr = tmp;

	return ptr;
}
