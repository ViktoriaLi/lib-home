#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int i;
	int j;
	int res;

	i = 0;
	j = 0;
	if (needle[0] == 0)
		return (char*)(haystack);
	while (haystack[i] != 0)
	{
		if (haystack[i] == needle[j])
		{
			res = i;
			n = j + n;
			while (haystack[i] == needle[j] && j < n)
			{
				i++;
				j++;
			}
			if ((j == n - 1) || needle[j] == 0)
				return (char*)(&haystack[res]);
		}	
		i++;
	}
	return NULL;
}
