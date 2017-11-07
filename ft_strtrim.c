#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	int i;
	int j;
	int len;
	char *dest;
	
	i = 0;
	len = 0;
	s = (chr *)s;
	while (s[i] != 0)
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			len++;
		i++;
	}
	i = 0;
	dest = malloc(sizeof(char) * len);
	while (s[i] != 0)
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			{
				dest[j] = s[i];
				j++;
			}
			i++;
	}
	return (dest);
}
