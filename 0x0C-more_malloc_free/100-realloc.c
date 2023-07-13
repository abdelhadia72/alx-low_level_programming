#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if(old_size >= new_size)
		return malloc(new_size);
	
	if(new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	
		int *tmp = (void *)malloc(new_size);
		printf("tmp %p\n",tmp);
		printf("ptr %p\n",ptr);
		if(!tmp)
			return (NULL);
		memcpy(tmp,ptr,old_size);
		free(ptr);
		ptr = tmp;
		printf("tmp %p\n",tmp);
		printf("ptr %p\n",ptr);

	return ptr;
}


