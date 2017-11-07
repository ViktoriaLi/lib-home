#include <string.h>
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	size_t			i;
	unsigned char	*dest;

	i = 0;
	dest = malloc(sizeof(unsigned char) * size);
	if (dest == NULL)
		return (NULL);
	while (i < size)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
