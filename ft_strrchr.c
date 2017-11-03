#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int j;
	int len;
	int res;

	j = 0;
	len = 0;
	res = 0;
	while (s[len] != 0)
		len++;
	if (c == 0)
		return (char*)(&s[len]);
	while (j < len)
	{
		if (s[j] == c)
			res = j;
		j++;
	}
	if (res != 0)
		return (char*)(&s[res]);
	return NULL;
}
