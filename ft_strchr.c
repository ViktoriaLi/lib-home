#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int j;
	int len;

	j = 0;
	len = 0;
	while (s[len] != 0)
		len++;
	if (c == 0)
		return (char*)(&s[len]);
	while (s[j] != c && j < len)
		j++;
	if (s[j] == c)
		return (char*)(&s[j]);
	return NULL;
}
