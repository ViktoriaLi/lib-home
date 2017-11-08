#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int 			i;
	int 			len;
	unsigned char	*dest;

	i = 0;
	s = (unsigned char *)s;
	while (s[i] != 0)
		i++;
	len = i + 1;
	i = 0;
	dest = malloc(sizeof(unsigned char) * len);
	while (i < len)
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = 0;
	return (dest);
}
