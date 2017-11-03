#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
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
			while (haystack[i] == needle[j])
			{
				i++;
				j++;
			}
			if (needle[j] == 0)
				return (char*)(&haystack[res]);
		}	
		i++;
	}
	return NULL;
}
