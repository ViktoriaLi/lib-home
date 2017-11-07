
#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	unsigned char *dest;

	dest = malloc(sizeof(unsigned char) * size);
	if (dest == NULL)
		return (NULL);
	dest = 0;
	return (dest);
}
