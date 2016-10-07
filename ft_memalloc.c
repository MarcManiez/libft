#include "libft.h"

void *ft_memalloc (size_t size)
{
	void *tempalloc;
	if (!(tempalloc = malloc(size)) || size == 0)
	{
		return NULL;
	}
	memset(tempalloc, '\0', size);
	return tempalloc;
}
