#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int				i;
	int				len;
	unsigned char	*dest;

	i = 0;
	while (s[i] != 0)
		i++;
	len = i + 1;
	i = 0;
	dest = malloc(sizeof(unsigned char) * len);
	while (i < len)
	{
		dest[i] = f(s[i]);
		i++;
	}
	dest[i] = 0;
	return (dest);
}
