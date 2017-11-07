#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned char	*dest;

	i = 0;
	dest = malloc(sizeof(unsigned char) * len);
	if (dest == NULL)
		return (NULL);
	s = (unsigned char *)c;
	while (i < len)
	{
		dest[i] = s[start];
		i++;
		start++;
	}
	return (dest);
}
